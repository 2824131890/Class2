<!DOCTYPE html>
<html>

<head>
	<meta charset="UTF-8">
	<meta name="renderer" content="webkit">
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
	<title>欢迎注册！</title>
	<link rel='stylesheet' href='component/pear/css/pear.css' />
	<link rel='stylesheet' href='admin/css/other/login.css' />
	<link rel="stylesheet" href="component/pear/css/ys.css" />
	<script src="https://apps.bdimg.com/libs/jquery/2.1.4/jquery.min.js"></script>
</head>

<body background="img/background.svg" style="background-size:cover">
	<div class="layui-form">
		<div class="layui-form-item">
			<img class="logo" src="img/logo.png" />
			<div class="title">注册系统</div>
			<div class="desc">明 湖 区 最 具 影 响 力 的 设 计 规 范 之 一</div>
		</div>
		<div class="layui-form-item">
			<input name="username" placeholder="请输入账号" lay-verify="required" hover class="layui-input" autocomplete="on" />
		</div>
		<div class="layui-form-item">
			<input name="password" type="password" placeholder="请输入密码" lay-verify="required" hover class="layui-input" autocomplete="on" />
		</div>
        <div class="layui-form-item">
			<input id="code" name="code" placeholder="请输入验证码" hover class="layui-input" /><img src="code.php" onclick="this.src='code.php?' + new Date().getTime();">
		</div>
		<div class="layui-form-item">
			<button type="button" class="pear-btn pear-btn-success layui-btn-fluid" lay-submit lay-filter="login">
				注册
			</button>
		</div>

	</div>

    <script>
		window.addEventListener('load', function () {
        let body = document.body;
        let content = ["富强","民主","文明","和谐","美丽","自由","平等","公正","法制"] //自定义内容的数组
        body.addEventListener('click', function (e) {
            let x = e.pageX;
            let y = e.pageY; //当前坐标
            let randContent = Math.ceil(Math.random() * content.length);
            let text = new Text(x, y, randContent);
            let span = document.createElement('span')
            span.style.color = text.getRandom();
            text.create(span);
            setTimeout(function () {
                text.out(span)
            }, 1900)
        })

        function Text(x, y, rand) {
            this.x = x;
            this.y = y;
            this.rand = rand;
        }
        Text.prototype.create = function (_this) {
            let body = document.body;
            _this.innerHTML = content[this.rand - 1];
            _this.className = 'text'
            _this.style.top = this.y - 20 + 'px'
            _this.style.left = this.x - 50 + 'px'
            _this.style.animation = 'remove 2s'
            body.appendChild(_this);
            let i = 0
            setInterval(() => {
                _this.style.top = this.y - 20 - i + 'px'
                i++
            }, 10);
        }
        Text.prototype.out = function (_this) {
            _this.remove()
        }
        //设置随机颜色
        Text.prototype.getRandom = function () {
            let allType = '0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f'; //16进制颜色
            let allTypeArr = allType.split(','); //通过','分割为数组
            let color = '#';
            for (var i = 0; i < 6; i++) {
                //随机生成一个0-16的数
                var random = parseInt(Math.random() * allTypeArr.length);
                color += allTypeArr[random];
            }
            return color; //返回随机生成的颜色
        }
    })

    $('.pear-btn.pear-btn-success.layui-btn-fluid').click(function(){
			$.ajax({
				url:'sign1.php',
				type:'POST',
				data:{
					username:$('.layui-input')[0].value,
					password:$('.layui-input')[1].value,
					code:$("#code").val()
				},
				dataType:'json',
				success:function(res){
					if(res.code == 1){
                        alert('注册成功！')
						location.href = 'login.php'
					}else if(res.code == 0){
						alert('验证码错误！')
					}else if(res.code == 2){
                        alert("用户名已存在！")
                    }
				},
				erro:function(){
					alert("失败！")
				}
			})
		})
    </script>
    
    </body>
    </html>
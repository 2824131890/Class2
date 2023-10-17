<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>注册</title>
	<link rel="stylesheet" type="text/css" href="gowk/css/gowk.css">
	<link rel="icon" type="image/x-icon" href="img/gowk.png"/>
	<script src="https://apps.bdimg.com/libs/jquery/2.1.4/jquery.min.js"></script>
</head>
<body>
<div class="login-box">
				<p>Gowk</p>
				<!-- <div class="user-box">
					<input required="" v-model="reg.name" type="text">
					<label>昵称</label>
				</div> -->
				<div class="user-box">
					<input name="username" type="text" id="username">
					<label>QQ</label>
				</div>
				<div class="user-box">
					<input name="password" type="password" id="password">
					<label>密码</label>
				</div>
				<div class="user-box">
					<input name="text" type="text" id="text">
					<label>验证码</label>
				</div>
				<div class="user-box">
					<img src="code.php" onclick="this.src='code.php?' + new Date().getTime();">
				</div>
				<a id="button" onclick="register()">
					Register
				</a>
				<a id="button" onclick="qiehuan()">Sign in!</a>
				<p align="center">Already have an account? </p>
			</div>


	<script>
		function qiehuan(){
			location.href = "gowk.php"
		}

		function register(){
			// if($("#username").val() == '杨文婷' && $("#password").val() != '' && $("#text").val() != ''){
				$.ajax({
				url:'resgter.php',
				type:'POST',
				data:{
					username:$("#username").val(),
					password:$("#password").val(),
					text:$("#text").val()
				},
				dataType:'json',
				success:function(res){
					if(res.code == 1){
						alert("注册成功！")
						location.href = 'gowk.php'
					}else if(res.code == 0){
						// location.href = 'reg1.php'
					}else if(res.code == 2){
						alert("用户名已存在！")
					} 
				}
			})
		// 	}else{
		// 		alert("注册失败，你不是我爸爸！")
		// 	}
		}

	</script>


</body>
</html>
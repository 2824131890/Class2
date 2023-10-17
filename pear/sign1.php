<?php
session_start();
$success = array('code' => 1, 'msg' => '注册成功！');
$erro = array('code' => 0, 'msg' => '注册失败！');
$repeat = array('code' => 2, 'msg' => '用户名已存在！');
$erro1 = array('code' => 3, 'msg' => '有空值！');
$username = trim($_POST['username']);
$password = trim($_POST['password']);
$code = trim($_POST['code']);

if($username != '' && $password != '' && $code != ''){
    if($_SESSION['authcode'] == $code && $code != ''){
        $_SESSION['authcode'] = '';
        include_once 'conn.php';
        $sql = "select * from dblab where username = '$username'";
        $result = mysqli_query($conn,$sql);
        $res = mysqli_num_rows($result);
    
    
    
    if($res){
        echo json_encode($repeat);
        exit; 
    }else{
        $sql = "insert into dblab(username, password) VALUES ('$username','$password')";
        $result = mysqli_query($conn,$sql);
        $_SESSION['authcode'] = '';
        echo json_encode($success);
    }
    
    }else{
        $_SESSION['authcode'] = '';
        echo json_encode($erro);
        exit;
    }
}else{
    $_SESSION['authcode'] = '';
    echo json_encode($erro1);
    echo "<script>alert('不能有空值！')</script>";
    exit;
}



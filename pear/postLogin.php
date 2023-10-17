<?php
session_start();
$success = array('code' => 1, 'msg' => '登录成功！');
$erro = array('code' => 0, 'msg' => '登录失败！');
$username = trim($_POST['username']);
$password = trim($_POST['password']);


include_once 'conn.php';
$sql = "select * from dblab where username = '$username' and password = '$password'";
$result = mysqli_query($conn,$sql);
$res = mysqli_num_rows($result);


if($res != 0){
    $_SESSION['log'] = $username;
    echo json_encode($success); 
}else{
    echo json_encode($erro);
}



<?php
session_start();
$erro = array("code"=>"0","msg"=>"注册失败！");
$success = array("code"=>"1","msg"=>"注册成功！");
$black = array("code"=>"2","msg"=>"用户名已存在！");
$username = trim($_POST['username']);
$password = trim($_POST['password']);
$text = trim($_POST['text']);

if($username != '' && $password != '' && $text == $_SESSION['authcode']){
    include_once "conn.php";
    $sql = "select * from dblab where username = '$username'";
    $result = mysqli_query($conn,$sql);
    $num = mysqli_num_rows($result);


        if(!$num){
            $sql = "insert into dblab(username, password) values ('$username','$password')";
            $result = mysqli_query($conn,$sql);
            $_SESSION['authcode'] = '';
            echo json_encode($success);
        }else{
            $_SESSION['authcode'] = '';
            echo json_encode($black);
            exit;
        }
}else{
    $_SESSION['authcode'] = '';
    echo json_encode($erro);
    exit;
}



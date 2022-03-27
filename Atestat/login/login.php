<?php

session_start();
if(isset($_POST['submit']))
  {
    include('../connection/connection.php');
    $username = $_POST['username'];
    $password = $_POST['password'];
    $my_connection = OpenConnection();
    $sql = "SELECT id, username, user_password FROM Library_User where username = '$username' AND user_password = '$password' LIMIT 1";
    $query = $my_connection->query($sql);
    if($query)
      {
         $row = mysqli_fetch_row($query);
         $userId = $row[0];
         $dbUsername = $row[1];
         $dbPassword = $row[2];
      }
    if($username == $dbUsername AND $password == $dbPassword)
       {
         header('Location:../view/mainPage.php');
       }
    else 
       {
         echo "<b><i>Incorrect credentials</i><b>";
       }
    CloseConnection($my_connection);
  }

?>
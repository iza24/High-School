<?php

function OpenConnection(): mysqli
{
   $dbhost = "127.0.0.1";
   $dbusername = "root";
   $dbpassword = "";
   $dbname = "librarie";
   return mysqli_connect($dbhost, $dbusername, $dbpassword, $dbname);
}


function CloseConnection(mysqli $my_connection)
{
  $my_connection->close();
}


?>
<?php
include('../connection/connection.php');
$connection = OpenConnection();
$query = "select * from book b INNER JOIN author a on b.AuthorID=a.AuthorID";
$result = mysqli_query($connection, $query);
if(mysqli_num_rows($result) > 0) 
   {
     echo "<table>";
     echo "<tr>";
     echo "<th>Title</th>";
     echo "<th>Author</th>";
     echo "<th>Genre</th>";
     echo "<th>Publisher</th>";
     echo "<th>ACTION</th>";
     echo "</tr>";
     while($row=mysqli_fetch_array($result))
           {
            echo "<tr>";
            echo "<td>".$row['Name']."</td>";
            echo "<td>".$row['FirstName']." ".$row['LastName']."</td>";
            echo "<td>".$row['Genre']."</td>";
            echo "<td>".$row['Publisher']."</td>";
            echo "<td>"."<a href=../view/deleteBook.php?id=".$row['BookID'].">Delete</a>
            <br>".
            "<a href=../view/updateBook.php?id=".$row['BookID'].">Update</a>
            <br>".
            
            
            "</td>";
            echo "</tr>";
           }
     echo "</table>";
   }
CloseConnection($connection);
?>
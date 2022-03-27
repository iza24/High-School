<?php
include('../connection/connection.php');
$connection = OpenConnection();

$BookID = $_POST['BookID'];
$Name = $_POST['Name'];
$AuthorID = $_POST['AuthorID'];
$Genre = $_POST['Genre'];
$Year = $_POST['Year'];
$Price = $_POST['Price'];
$Publisher = $_POST['Publisher'];
$NumberOfPages = $_POST['NumberOfPages'];
$ShortDescription = $_POST['ShortDescription'];
$Review = $_POST['Review'];

$sql_query = "update book
SET Name= '$Name',
AuthorID= $AuthorID,
Genre='$Genre',
Year=$Year,
Price=$Price,
Publisher='$Publisher',
NumberOfPages=$NumberOfPages,
ShortDescription='$ShortDescription',
Review=$Review 
WHERE BookID='$BookID'; ";

$result = mysqli_query($connection, $sql_query);
if ($result) {
    echo "Book was updated successfully!";
    header("Location: ../view/mainPage.php");
} else {
    echo "Book cannot be updated.";
}
mysqli_close($connection);
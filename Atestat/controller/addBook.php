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


$sql_query = "insert into book(BookID,Name,AuthorID,Genre,Year,Price,Publisher,NumberOfPages,ShortDescription,Review) values ($BookID,'$Name',$AuthorID,'$Genre',$Year,$Price,'$Publisher',$NumberOfPages,'$ShortDescription',$Review
)";

$result = mysqli_query($connection, $sql_query);
if ($result) {
    echo "Book was added successfully!";
    header("Location: ../view/mainPage.php");
} else {
    echo "Book was not added.";
}
mysqli_close($connection);
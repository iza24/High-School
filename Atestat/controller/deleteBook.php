
<?php
include('../connection/connection.php');
$connection = OpenConnection();
if (isset($_POST['id']) && !empty(trim($_POST['id']))) {
    $id = $_POST['id'];
    $sql_query = "delete from book where BookID = '$id';";
    $result = mysqli_query($connection, $sql_query);
    if ($result) {
        echo "Book was deleted successfully!";
        header("Location: ../view/mainPage.php");
    } else {
        echo "Book cannot be deleted.";
    }
}
mysqli_close($connection);
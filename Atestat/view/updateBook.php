<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>Proiect Atesta</title>
    <link rel="stylesheet" href="addBook.css">
</head>

<body style="background-color: rgb(0, 62, 155);">
<div class="container" style="background-color: rgba(143, 188, 255, 0.466);">
    <h1>Update a new book</h1> <br><br>

    <form action="../controller/updateBook.php" method="post" >
        <input value="<?php echo trim($_GET['id']); ?>" name="BookID"> <br>
        <input type="text" name="Name" placeholder="Title:"> <br>
        <input type="number" name="AuthorID" placeholder="Author ID:"> <br>
        <input type="text" name="Genre" placeholder="Genre:"> <br>
        <input type="number" name="Year" placeholder="Year:"> <br>
        <input type="number" name="Price" placeholder="Price:"> <br>
        <input type="text" name="Publisher" placeholder="Publisher:"> <br>
        <input type="number" name="NumberOfPages" placeholder="Number of pages:"> <br>
        <input type="text" name="ShortDescription" placeholder="Description:"> <br>
        <input type="number" name="Review" placeholder="Review:"> <br>
        


        <div class="button_container">
            <button type="submit">Update Book</button>
            <button type="reset" onclick="window.location.href='mainPage.php'">Cancel</button>
        </div>
    </form>
</div>
</body>

</html>
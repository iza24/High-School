<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Proiect Atestat</title>
    <link rel="stylesheet" type="text/css" href="mainPage.css">
    <script src="mainPage.js"></script>
</head>
<body>
    <div class="container">
        <div class="details">
            <h1 style="font-size: 50px; color: black;">BooksLife</h1>
            <br>
            <!-- <input type="text" placeholder="Genre:" id="type"/>
            <input type="text" placeholder="Title:" id="type"/>
            <input type="text" placeholder="Author:" id="type"/> -->

            <button style="display:block;float:right; color:white; background-color:#3982c7;font-size:18px;" class="add" onclick="window.location.href='addBook.html'">
                Add Book
            </button>

        </div>
        <h3>All Books</h3>
                <?php include '../controller/getBooks.php';?>
    </div>

</body>
</html>
<!DOCTYPE html>

<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>Delete Book</title>
    <link rel="stylesheet" type="text/css" href="deleteBook.css">
</head>

<body>
<br><br><br><br><br><br>
<div class="container" style="background-color: rgba(223, 223, 255, 0.466);">
    <br>
    <p><b>Do you want to delete this book?</b></p>

    <form action="../controller/deleteBook.php" method="post">
        <input type="hidden" name="id" value="<?php echo trim($_GET['id']); ?>">
        <button type="submit" class="yes">YES</button>
    </form>
    <button class="no" onclick="window.location.href='../view/mainPage.php'">
        NO
    </button>
</div>
</body>

</html>
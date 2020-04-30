<?php

// Connect png file
include ("bd.php");
include ("add.php");
?>
<!doctype html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Проект</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body class="main">

<?php

// Mistake

$link = include ("bd.php");

mysqli_select_db($link, "leonzendero");

$query = mysqli_query( $link, "SELECT * FROM 'articlesnew'" );
$result = mysqli_fetch_array($query);

// End Mistake

print<<<HERE
<div id="id">
<div id="text"> ID: $result[id]</div>
<div id="text"> Name: $result[name]</div>
<div id="text">Text: $result[text]</div>
<div id="text">Cost: $result[sum]</div>
<div id="text">Date: $result[date]</div>
<form method="POST" action="add.php">
<input type="submit" id="submit" value="Добавить"
</form>
</div>

HERE;

?>
</body>
</html>
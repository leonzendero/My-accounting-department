<?php
include ("index.php");
?>
<!doctype html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Обработчик</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
<?php
if (isset($_POST['text'])) {
    $text = $_POST['text'];
}
if ($text == '') {
    unset($text);
}

$link = include ("bd.php");

$query = mysqli_query("INSERT INTO 'leonzendero' ('text') VALUES ('$text')", $link);
if ($query == 'true') {
    echo "Запись добавлена";
} else {
    echo "error";
}
?>
</body>
</html>
<!doctype html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Сторінка для добавлення запису</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
<div id="id">
<form method="POST" action="add_info.php">
    <input type="text" name="name" placeholder="Назва">
    <input type="text" name="text" placeholder="Опис">
    <input type="number" name="cost" placeholder="Сума витратив/отримав">
    <input type="date" name="date" placeholder="Дата події">
    <input type="submit" name="submit" value="Добавить">
</form>
</div>
</body>
</html>
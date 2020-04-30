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
    <title>Document</title>
</head>
<body>
<?php
$link = include ("bd.php");

// Start

$something = mysqli_query($link, "SHOW TABLES FROM `test`");

// Array data

while ($row = mysqli_fetch_array($something)) {
    echo "Tab: <a href='id={$row[0]}'>{$row[0]}</a><br>";
}
echo "Into a base `test`: ".mysqli_num_rows($something)." tab";

if (isset($_GET['id'])) {
    $into = mysqli_query($link, "SELECT * FROM ".$_GET['id']);
    ?>
    <table border='5'>
        <?php
        while($always = mysqli_fetch_assoc($into))
        {
            ?>
            <tr>
                <?php
                foreach($always as $nine)
                {

                    echo "<td>" . $nine . "</td>"; //вывод данных

                }
                ?>
            </tr>

        <?php }?>

    </table>

<?php }
?>
</body>
</html>
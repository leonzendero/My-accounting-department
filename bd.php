<?php

// Connect

$link = mysqli_connect("127.0.0.1", "root", "root");

// Verification

if (mysqli_connect_error()) {
    printf("Connect failed: ", mysqli_connect_error());
    exit();
} else {
    echo "Connect done";
}

?>
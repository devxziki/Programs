<?php
    echo "01 print function used to display on screen"."<br>";
    $str="Who is Ramesh";
    print $str;
    echo "<br>";
    echo "<br>";

    echo "02 chr() function used to return the given in to ascii code <br>";
    echo "Ascii Value of 52 is:".chr(52)."<br/>";
    echo "Ascii Value of 102 is:".chr(102)."<br/>";
    echo "<br>";

    echo "03 Echo function is used to print display the value <br>";
    echo "Hello World <br>";
    echo "<br>";

    echo "04 trim() function removes white space and other predifiend characters from both sides of a string <br>";
    $str=" hello world ";
    echo "Without rim Function: ".$str."<br>";
    echo "With trim Function:".Trim($str)."<br>";
    echo "<br>";

    echo "05 Ltrim() function removes white space other predifiend characters from both Before And After The string <br>";
    $str=" hello world ";
    echo "Without Lrim Function: ".$str."<br>";
    echo "With Ltrim Function:".Ltrim($str)."<br>";
    echo "<br>";

    echo "06 Rtrim() function removes white space other predifiend characters from both Before And After The string <br> ";
    $str=" hello world ";
    echo "Without Rrim Function: ".$str."<br>";
    echo "With Rtrim Function:".Rtrim($str)."<br>";
    echo "<br>";
?>
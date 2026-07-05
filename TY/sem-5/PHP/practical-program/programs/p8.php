<!-- 8. Write a PHP script to swap the values of two variables. -->
<html>
    <head>
    </head>
        <body>
            <form method="POST">
                <h3>Enter Two Numbers</h3>
                First Number:
                    <input type="number" name="num1" required><br><br>
                Second Number:
                    <input type="number" name="num2" required><br><br>
                    <input type="submit" name="swap" value="Swap Values">
            </form>

            <?php
                if (isset($_POST['swap'])) {
                     $a = $_POST['num1'];
                     $b = $_POST['num2'];
                // Using Third Variable
                    $tempA = $a;
                    $tempB = $b;
                    $c = $tempA;
                    $tempA = $tempB;
                    $tempB = $c;
                    echo "<h3>Using Third Variable</h3>";
                    echo "A = " . $tempA . "<br>";
                    echo "B = " . $tempB . "<br><br>";

                 // Without Third Variable
                    $d = $a;
                    $e = $b;
                    $d = $d + $e;
                    $e = $d - $e;
                    $d = $d - $e;
                    echo "<h3>Without Third Variable</h3>";
                    echo "D = " . $d . "<br>";
                    echo "E = " . $e . "<br>";
                }
            ?>
        </body>
</html>
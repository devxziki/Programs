<?php
// 19. Write a PHP script to find Armstrong numbers between 1 and 500
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Armstrong Numbers Between 1 and 500</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #ffecd2 0%, #fcb69f 100%);
            display: flex; justify-content: center; align-items: center;
            min-height: 100vh; padding: 20px;
        }
        .container {
            background: #fff; padding: 35px; border-radius: 12px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.2); max-width: 600px; width: 100%;
            text-align: center;
        }
        h2 { color: #2c3e50; margin-bottom: 10px; }
        p.subtitle { color: #7f8c8d; margin-bottom: 25px; }
        .numbers {
            display: flex; flex-wrap: wrap; justify-content: center; gap: 12px;
            margin-top: 10px;
        }
        .num-badge {
            width: 55px; height: 55px; display: flex; align-items: center; justify-content: center;
            background: linear-gradient(135deg, #ffecd2 0%, #fcb69f 100%);
            border-radius: 50%; font-size: 18px; font-weight: 700; color: #2c3e50;
            box-shadow: 0 4px 10px rgba(0,0,0,0.1);
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Armstrong Numbers</h2>
        <p class="subtitle">Between 1 and 500</p>
        <?php
        echo '<div class="numbers">';
        for ($a = 1; $a <= 500; $a++) {
            $sum = 0;
            $temp = $a;
            while ($temp > 0) {
                $d = $temp % 10;
                $sum += ($d * $d * $d);
                $temp = (int)($temp / 10);
            }
            if ($a == $sum) {
                echo '<div class="num-badge">' . $a . '</div>';
            }
        }
        echo '</div>';
        ?>
    </div>
</body>
</html>

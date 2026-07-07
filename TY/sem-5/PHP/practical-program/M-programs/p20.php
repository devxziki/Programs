<?php
// 20. Write a PHP script to find prime numbers between 1 and 100
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Prime Numbers Between 1 and 100</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
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
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            border-radius: 50%; font-size: 18px; font-weight: 700; color: #fff;
            box-shadow: 0 4px 10px rgba(0,0,0,0.15);
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Prime Numbers</h2>
        <p class="subtitle">Between 1 and 100</p>
        <?php
        echo '<div class="numbers">';
        for ($a = 2; $a <= 100; $a++) {
            $isPrime = true;
            for ($i = 2; $i <= sqrt($a); $i++) {
                if ($a % $i == 0) {
                    $isPrime = false;
                    break;
                }
            }
            if ($isPrime) {
                echo '<div class="num-badge">' . $a . '</div>';
            }
        }
        echo '</div>';
        ?>
    </div>
</body>
</html>

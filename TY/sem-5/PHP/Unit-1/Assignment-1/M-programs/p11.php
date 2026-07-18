<?php
// 11. Write a PHP script to print numbers 1 to 10 using a while loop
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>While Loop - Numbers 1 to 10</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #a8edea 0%, #fed6e3 100%);
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
            background: linear-gradient(135deg, #a8edea 0%, #fed6e3 100%);
            border-radius: 50%; font-size: 20px; font-weight: 700; color: #2c3e50;
            box-shadow: 0 4px 10px rgba(0,0,0,0.1);
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Numbers 1 to 10</h2>
        <p class="subtitle">Using a While Loop</p>
        <?php
        $i = 1;
        echo '<div class="numbers">';
        while ($i <= 10) {
            echo '<div class="num-badge">' . $i . '</div>';
            $i++;
        }
        echo '</div>';
        ?>
    </div>
</body>
</html>

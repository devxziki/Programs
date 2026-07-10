<?php
// 12. Write a PHP script to print numbers 1 to 10 using a do...while loop
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Do...While Loop - Numbers 1 to 10</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #4b6cb7 0%, #182848 100%);
            display: flex; justify-content: center; align-items: center;
            min-height: 100vh; padding: 20px;
        }
        .container {
            background: #fff; padding: 35px; border-radius: 12px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.25); max-width: 600px; width: 100%;
            text-align: center;
        }
        h2 { color: #182848; margin-bottom: 10px; }
        p.subtitle { color: #6b7a99; margin-bottom: 25px; }
        .numbers {
            display: flex; flex-wrap: wrap; justify-content: center; gap: 12px;
            margin-top: 10px;
        }
        .num-badge {
            width: 55px; height: 55px; display: flex; align-items: center; justify-content: center;
            background: linear-gradient(135deg, #4b6cb7 0%, #182848 100%);
            border-radius: 50%; font-size: 20px; font-weight: 700; color: #fff;
            box-shadow: 0 4px 10px rgba(24,40,72,0.25);
            opacity: 0; transform: scale(0.5);
            animation: pop 0.4s ease-out forwards;
            animation-delay: calc(var(--i) * 0.08s);
        }
        .num-badge:hover { transform: scale(1.12); box-shadow: 0 6px 16px rgba(24,40,72,0.4); transition: transform 0.18s, box-shadow 0.18s; }
        @keyframes pop {
            from { opacity: 0; transform: scale(0.5); }
            to   { opacity: 1; transform: scale(1); }
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Numbers 1 to 10</h2>
        <p class="subtitle">Using a Do...While Loop</p>
        <?php
        $i = 1;
        echo '<div class="numbers">';
        do {
            echo '<div class="num-badge" style="--i:' . $i . '">' . $i . '</div>';
            $i++;
        } while ($i <= 10);
        echo '</div>';
        ?>
    </div>
</body>
</html>

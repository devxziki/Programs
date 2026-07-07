<?php
// 10. Write a PHP script to print the Fibonacci series
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Fibonacci Series</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #96e6a1 0%, #d4fc79 100%);
            display: flex; justify-content: center; align-items: center;
            min-height: 100vh; padding: 20px;
        }
        .container {
            background: #fff; padding: 35px; border-radius: 12px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.2); max-width: 500px; width: 100%;
        }
        h2 { color: #2c3e50; margin-bottom: 20px; text-align: center; }
        .form-group { margin-bottom: 18px; }
        label { display: block; margin-bottom: 6px; font-weight: 600; color: #34495e; }
        input[type="number"] {
            width: 100%; padding: 12px; border: 2px solid #e0e0e0; border-radius: 8px;
            font-size: 16px; transition: border-color 0.3s;
        }
        input[type="number"]:focus { border-color: #96e6a1; outline: none; }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #96e6a1 0%, #d4fc79 100%);
            color: #2c3e50; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: opacity 0.3s;
        }
        input[type="submit"]:hover { opacity: 0.9; }
        .result {
            margin-top: 20px; padding: 15px; background: #f0fff4; border-left: 5px solid #96e6a1;
            border-radius: 8px; font-size: 16px; color: #2c3e50; font-weight: 500;
            word-wrap: break-word;
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Fibonacci Series</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter Number of Terms:</label>
                <input type="number" name="no1" id="no1" min="1" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Generate Series">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $n = (int)$_POST['no1'];
            $a = 1;
            $b = 1;
            $series = [];

            if ($n >= 1) $series[] = $a;
            if ($n >= 2) $series[] = $b;

            for ($i = 3; $i <= $n; $i++) {
                $c = $a + $b;
                $series[] = $c;
                $a = $b;
                $b = $c;
            }

            echo '<div class="result">';
            echo "<strong>Fibonacci Series (" . $n . " terms):</strong><br>";
            echo implode(' &rarr; ', $series);
            echo '</div>';
        }
        ?>
    </div>
</body>
</html>

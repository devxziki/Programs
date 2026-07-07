<?php
// 13. Write a PHP script to find the factorial of a number
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial Calculator</title>
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
            box-shadow: 0 10px 30px rgba(0,0,0,0.2); max-width: 500px; width: 100%;
        }
        h2 { color: #2c3e50; margin-bottom: 20px; text-align: center; }
        .form-group { margin-bottom: 18px; }
        label { display: block; margin-bottom: 6px; font-weight: 600; color: #34495e; }
        input[type="number"] {
            width: 100%; padding: 12px; border: 2px solid #e0e0e0; border-radius: 8px;
            font-size: 16px; transition: border-color 0.3s;
        }
        input[type="number"]:focus { border-color: #667eea; outline: none; }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            color: #fff; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: opacity 0.3s;
        }
        input[type="submit"]:hover { opacity: 0.9; }
        .result {
            margin-top: 20px; padding: 20px; background: #f0f0ff; border-left: 5px solid #667eea;
            border-radius: 8px; font-size: 18px; color: #2c3e50; font-weight: 600; text-align: center;
        }
        .formula { font-size: 13px; color: #7f8c8d; margin-top: 8px; font-weight: 400; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Factorial Calculator</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter a Number:</label>
                <input type="number" name="no1" id="no1" min="0" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Calculate Factorial">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $a = (int)$_POST['no1'];
            $fact = 1;
            for ($i = 1; $i <= $a; $i++) {
                $fact *= $i;
            }
            echo '<div class="result">';
            echo "<strong>" . $a . "! = " . number_format($fact) . "</strong>";
            $parts = [];
            for ($i = $a; $i >= 1; $i--) $parts[] = $i;
            echo '<div class="formula">' . implode(' &times; ', $parts) . ' = ' . number_format($fact) . '</div>';
            echo '</div>';
        }
        ?>
    </div>
</body>
</html>

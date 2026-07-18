<?php
// 2. Write a PHP script to check whether the entered number is positive or negative
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Positive or Negative Checker</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            color: #333;
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            padding: 20px;
        }
        .container {
            background: #fff;
            padding: 35px;
            border-radius: 12px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.2);
            max-width: 500px;
            width: 100%;
        }
        h2 { color: #2c3e50; margin-bottom: 20px; font-size: 24px; text-align: center; }
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
            margin-top: 20px; padding: 15px; border-radius: 8px;
            font-size: 16px; font-weight: 600; text-align: center;
        }
        .result.positive { background: #d4edda; color: #155724; border-left: 5px solid #28a745; }
        .result.negative { background: #f8d7da; color: #721c24; border-left: 5px solid #dc3545; }
        .result.zero     { background: #fff3cd; color: #856404; border-left: 5px solid #ffc107; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Positive / Negative / Zero Checker</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter a Number:</label>
                <input type="number" name="no1" id="no1" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Check">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $a = (float)$_POST['no1'];
            if ($a < 0)      echo '<div class="result negative"><strong>' . htmlspecialchars($a . '') . '</strong> is a Negative value.</div>';
            elseif ($a > 0)  echo '<div class="result positive"><strong>' . htmlspecialchars($a . '') . '</strong> is a Positive value.</div>';
            else             echo '<div class="result zero">The value is <strong>Zero</strong>.</div>';
        }
        ?>
    </div>
</body>
</html>

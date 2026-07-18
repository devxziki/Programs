<?php
// 4. Check whether a given number is greater than, less than, or equal to 100
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Compare with 100</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #1e3c72 0%, #2a5298 100%);
            display: flex; justify-content: center; align-items: center;
            min-height: 100vh; padding: 20px;
        }
        .container {
            background: #fff; padding: 35px; border-radius: 12px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.25); max-width: 500px; width: 100%;
        }
        h2 { color: #1e3c72; margin-bottom: 20px; text-align: center; }
        .form-group { margin-bottom: 18px; }
        label { display: block; margin-bottom: 6px; font-weight: 600; color: #34495e; }
        input[type="number"] {
            width: 100%; padding: 12px; border: 2px solid #d6deeb; border-radius: 8px;
            font-size: 16px; transition: border-color 0.2s, box-shadow 0.2s;
        }
        input[type="number"]:focus {
            border-color: #2a5298; outline: none;
            box-shadow: 0 0 0 3px rgba(42,82,152,0.15);
        }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #1e3c72 0%, #2a5298 100%);
            color: #fff; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: transform 0.15s, box-shadow 0.15s;
        }
        input[type="submit"]:hover { transform: translateY(-1px); box-shadow: 0 6px 14px rgba(30,60,114,0.3); }
        input[type="submit"]:active { transform: translateY(0); }
        .result {
            margin-top: 20px; padding: 15px; border-radius: 8px;
            font-size: 16px; font-weight: 600; text-align: center;
        }
        .result.less    { background: #e7f0fe; color: #1e3c72; border-left: 5px solid #2a5298; }
        .result.greater { background: #e6f7ef; color: #14663a; border-left: 5px solid #1faa6b; }
        .result.equal   { background: #fff4e0; color: #8a5a00; border-left: 5px solid #f0a500; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Compare Number with 100</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter a Number:</label>
                <input type="number" name="no1" id="no1" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Compare with 100">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $a = (float)$_POST['no1'];
            if ($a < 100)      echo '<div class="result less"><strong>' . htmlspecialchars($a . '') . '</strong> is less than 100.</div>';
            elseif ($a > 100)  echo '<div class="result greater"><strong>' . htmlspecialchars($a . '') . '</strong> is greater than 100.</div>';
            else               echo '<div class="result equal">The value is <strong>equal to 100</strong>.</div>';
        }
        ?>
    </div>
</body>
</html>

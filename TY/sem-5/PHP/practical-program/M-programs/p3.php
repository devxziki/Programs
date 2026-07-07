<?php
// 3. Write a PHP script to perform arithmetic operations on two variables
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arithmetic Calculator</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #11998e 0%, #38ef7d 100%);
            display: flex; justify-content: center; align-items: center;
            min-height: 100vh; padding: 20px;
        }
        .container {
            background: #fff; padding: 35px; border-radius: 12px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.2); max-width: 500px; width: 100%;
        }
        h2 { color: #2c3e50; margin-bottom: 20px; text-align: center; }
        .form-group { margin-bottom: 15px; }
        label { display: block; margin-bottom: 6px; font-weight: 600; color: #34495e; }
        input[type="number"] {
            width: 100%; padding: 12px; border: 2px solid #e0e0e0; border-radius: 8px;
            font-size: 16px; transition: border-color 0.3s;
        }
        input[type="number"]:focus { border-color: #11998e; outline: none; }
        .btn-group { display: grid; grid-template-columns: repeat(3, 1fr); gap: 10px; margin-top: 10px; }
        .btn-group input[type="submit"] {
            padding: 12px; border: none; border-radius: 8px; font-size: 18px;
            font-weight: 700; cursor: pointer; color: #fff; transition: opacity 0.3s;
        }
        .btn-group input[type="submit"]:hover { opacity: 0.85; }
        .btn-add    { background: #28a745; }
        .btn-sub    { background: #dc3545; }
        .btn-mul    { background: #007bff; }
        .btn-div    { background: #fd7e14; }
        .btn-all    { background: #6f42c1; grid-column: 1 / -1; }
        .result {
            margin-top: 20px; padding: 15px; background: #f0fff4; border-left: 5px solid #11998e;
            border-radius: 8px; font-size: 16px; color: #2c3e50; font-weight: 500;
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Arithmetic Calculator</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Value 1:</label>
                <input type="number" name="no1" id="no1" step="any" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <div class="form-group">
                <label for="no2">Value 2:</label>
                <input type="number" name="no2" id="no2" step="any" required
                       value="<?php echo isset($_POST['no2']) ? htmlspecialchars($_POST['no2']) : ''; ?>">
            </div>
            <div class="btn-group">
                <input type="submit" name="add" value="+" class="btn-add">
                <input type="submit" name="sub" value="-" class="btn-sub">
                <input type="submit" name="mul" value="&times;" class="btn-mul">
                <input type="submit" name="div" value="&divide;" class="btn-div">
                <input type="submit" name="all" value="All Calculations" class="btn-all">
            </div>
        </form>
        <?php
        if (isset($_POST['no1']) && isset($_POST['no2'])) {
            $a = (float)$_POST['no1'];
            $b = (float)$_POST['no2'];
            echo '<div class="result">';
            if (isset($_POST['add']))      echo "<strong>Addition:</strong> $a + $b = " . ($a + $b);
            elseif (isset($_POST['sub']))  echo "<strong>Subtraction:</strong> $a - $b = " . ($a - $b);
            elseif (isset($_POST['mul']))  echo "<strong>Multiplication:</strong> $a &times; $b = " . ($a * $b);
            elseif (isset($_POST['div'])) {
                if ($b != 0) echo "<strong>Division:</strong> $a &divide; $b = " . ($a / $b);
                else         echo "<strong>Error:</strong> Division by zero is not allowed.";
            }
            elseif (isset($_POST['all'])) {
                echo "<strong>Addition:</strong> $a + $b = " . ($a + $b) . "<br>";
                echo "<strong>Subtraction:</strong> $a - $b = " . ($a - $b) . "<br>";
                echo "<strong>Multiplication:</strong> $a &times; $b = " . ($a * $b) . "<br>";
                if ($b != 0) echo "<strong>Division:</strong> $a &divide; $b = " . ($a / $b);
                else         echo "<strong>Division:</strong> Cannot divide by zero";
            }
            echo '</div>';
        }
        ?>
    </div>
</body>
</html>

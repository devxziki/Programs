<?php
// 6. Write a PHP script to print the multiplication table for a given number
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Multiplication Table</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #a18cd1 0%, #fbc2eb 100%);
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
        input[type="number"]:focus { border-color: #a18cd1; outline: none; }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #a18cd1 0%, #fbc2eb 100%);
            color: #fff; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: opacity 0.3s;
        }
        input[type="submit"]:hover { opacity: 0.9; }
        .result {
            margin-top: 20px; padding: 15px; background: #f3e7ff; border-left: 5px solid #a18cd1;
            border-radius: 8px; font-size: 16px; color: #2c3e50;
        }
        .result div { padding: 6px 0; border-bottom: 1px solid #e8d5f5; }
        .result div:last-child { border-bottom: none; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Multiplication Table</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter a Number:</label>
                <input type="number" name="no1" id="no1" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Generate Table">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $a = (float)$_POST['no1'];
            echo '<div class="result">';
            for ($i = 1; $i <= 10; $i++) {
                echo "<div>$a &times; $i = " . ($a * $i) . "</div>";
            }
            echo '</div>';
        }
        ?>
    </div>
</body>
</html>

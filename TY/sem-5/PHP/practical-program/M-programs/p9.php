<?php
// 9. Write a PHP script to find the greatest number among three numbers
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Greatest of Three Numbers</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #f6d365 0%, #fda085 100%);
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
        input[type="number"]:focus { border-color: #fda085; outline: none; }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #f6d365 0%, #fda085 100%);
            color: #fff; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: opacity 0.3s;
        }
        input[type="submit"]:hover { opacity: 0.9; }
        .result {
            margin-top: 20px; padding: 15px; background: #fff8e1; border-left: 5px solid #fda085;
            border-radius: 8px; font-size: 16px; color: #2c3e50; font-weight: 600; text-align: center;
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Greatest of Three Numbers</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Number 1:</label>
                <input type="number" name="no1" id="no1" step="any" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <div class="form-group">
                <label for="no2">Number 2:</label>
                <input type="number" name="no2" id="no2" step="any" required
                       value="<?php echo isset($_POST['no2']) ? htmlspecialchars($_POST['no2']) : ''; ?>">
            </div>
            <div class="form-group">
                <label for="no3">Number 3:</label>
                <input type="number" name="no3" id="no3" step="any" required
                       value="<?php echo isset($_POST['no3']) ? htmlspecialchars($_POST['no3']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Find Greatest">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && isset($_POST['no2']) && isset($_POST['no3'])) {
            $a = (float)$_POST['no1'];
            $b = (float)$_POST['no2'];
            $c = (float)$_POST['no3'];

            if ($a >= $b && $a >= $c) $greatest = $a;
            elseif ($b >= $a && $b >= $c) $greatest = $b;
            else $greatest = $c;

            echo '<div class="result">';
            echo "<strong>$greatest</strong> is the greatest number.";
            echo '</div>';
        }
        ?>
    </div>
</body>
</html>

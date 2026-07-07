<?php
// 5. Write a PHP script to check whether the entered year is a leap year or not
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Leap Year Checker</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #4facfe 0%, #00f2fe 100%);
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
        input[type="number"]:focus { border-color: #4facfe; outline: none; }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #4facfe 0%, #00f2fe 100%);
            color: #fff; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: opacity 0.3s;
        }
        input[type="submit"]:hover { opacity: 0.9; }
        .result {
            margin-top: 20px; padding: 15px; border-radius: 8px;
            font-size: 16px; font-weight: 600; text-align: center;
        }
        .result.yes { background: #d4edda; color: #155724; border-left: 5px solid #28a745; }
        .result.no  { background: #f8d7da; color: #721c24; border-left: 5px solid #dc3545; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Leap Year Checker</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter a Year:</label>
                <input type="number" name="no1" id="no1" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Check Leap Year">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $year = (int)$_POST['no1'];
            $isLeap = ($year % 4 == 0 && $year % 100 != 0) || ($year % 400 == 0);
            if ($isLeap) echo '<div class="result yes"><strong>' . $year . '</strong> is a Leap Year.</div>';
            else         echo '<div class="result no"><strong>' . $year . '</strong> is NOT a Leap Year.</div>';
        }
        ?>
    </div>
</body>
</html>

<?php
// 17. Write a PHP script to check whether a number is prime or not
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Prime Number Checker</title>
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
            margin-top: 20px; padding: 15px; border-radius: 8px;
            font-size: 16px; font-weight: 600; text-align: center;
        }
        .result.yes { background: #d4edda; color: #155724; border-left: 5px solid #28a745; }
        .result.no  { background: #f8d7da; color: #721c24; border-left: 5px solid #dc3545; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Prime Number Checker</h2>
        <form method="POST">
            <div class="form-group">
                <label for="no1">Enter a Number:</label>
                <input type="number" name="no1" id="no1" required
                       value="<?php echo isset($_POST['no1']) ? htmlspecialchars($_POST['no1']) : ''; ?>">
            </div>
            <input type="submit" name="check" value="Check Prime">
        </form>
        <?php
        if (isset($_POST['check']) && isset($_POST['no1']) && is_numeric($_POST['no1'])) {
            $a = (int)$_POST['no1'];
            $isPrime = true;
            if ($a <= 1) {
                $isPrime = false;
            } else {
                for ($i = 2; $i <= sqrt($a); $i++) {
                    if ($a % $i == 0) {
                        $isPrime = false;
                        break;
                    }
                }
            }
            if ($isPrime) {
                echo '<div class="result yes"><strong>' . $a . '</strong> IS a Prime Number.</div>';
            } else {
                echo '<div class="result no"><strong>' . $a . '</strong> is NOT a Prime Number.</div>';
            }
        }
        ?>
    </div>
</body>
</html>

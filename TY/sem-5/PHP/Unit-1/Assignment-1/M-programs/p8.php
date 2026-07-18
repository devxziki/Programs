<?php
// 8. Write a PHP script to swap the values of two variables
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Swap Two Variables</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #89f7fe 0%, #66a6ff 100%);
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
        input[type="number"]:focus { border-color: #66a6ff; outline: none; }
        input[type="submit"] {
            width: 100%; padding: 12px; background: linear-gradient(135deg, #89f7fe 0%, #66a6ff 100%);
            color: #fff; border: none; border-radius: 8px; font-size: 16px;
            font-weight: 600; cursor: pointer; transition: opacity 0.3s;
        }
        input[type="submit"]:hover { opacity: 0.9; }
        .result-section {
            margin-top: 20px; padding: 15px; background: #e8f4fd;
            border-left: 5px solid #66a6ff; border-radius: 8px; color: #2c3e50;
        }
        .result-section h3 { margin-bottom: 10px; color: #66a6ff; font-size: 16px; }
        .result-section p { margin: 5px 0; font-size: 15px; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Swap Two Variables</h2>
        <form method="POST">
            <div class="form-group">
                <label for="num1">First Number:</label>
                <input type="number" name="num1" id="num1" required
                       value="<?php echo isset($_POST['num1']) ? htmlspecialchars($_POST['num1']) : ''; ?>">
            </div>
            <div class="form-group">
                <label for="num2">Second Number:</label>
                <input type="number" name="num2" id="num2" required
                       value="<?php echo isset($_POST['num2']) ? htmlspecialchars($_POST['num2']) : ''; ?>">
            </div>
            <input type="submit" name="swap" value="Swap Values">
        </form>
        <?php
        if (isset($_POST['swap']) && isset($_POST['num1']) && isset($_POST['num2'])) {
            $a = $_POST['num1'];
            $b = $_POST['num2'];

            // Using Third Variable
            $tempA = $a;
            $tempB = $b;
            $c = $tempA;
            $tempA = $tempB;
            $tempB = $c;

            // Without Third Variable
            $d = $a + $b;
            $e = $d - $b;
            $d = $d - $e;
        ?>
            <div class="result-section">
                <h3>Using Third Variable</h3>
                <p>A = <strong><?php echo htmlspecialchars($tempA); ?></strong> &nbsp; B = <strong><?php echo htmlspecialchars($tempB); ?></strong></p>
            </div>
            <div class="result-section" style="margin-top: 10px;">
                <h3>Without Third Variable</h3>
                <p>D = <strong><?php echo htmlspecialchars($d); ?></strong> &nbsp; E = <strong><?php echo htmlspecialchars($e); ?></strong></p>
            </div>
        <?php } ?>
    </div>
</body>
</html>

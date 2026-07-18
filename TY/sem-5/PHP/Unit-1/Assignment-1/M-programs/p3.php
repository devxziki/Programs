<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>⚡ M‑Calculator</title>
    <link href="https://fonts.googleapis.com/css2?family=Inter:opsz@14..32&display=swap" rel="stylesheet">
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            font-family: 'Inter', system-ui, -apple-system, sans-serif;
            min-height: 100vh;
            display: flex;
            justify-content: center;
            align-items: center;
            background: linear-gradient(145deg, #0f0c29, #302b63, #24243e);
            padding: 1rem;
        }

        .calc-card {
            background: rgba(255, 255, 255, 0.05);
            backdrop-filter: blur(20px);
            -webkit-backdrop-filter: blur(20px);
            border: 1px solid rgba(255, 255, 255, 0.1);
            border-radius: 2rem;
            padding: 2.5rem 2.8rem;
            width: 100%;
            max-width: 480px;
            box-shadow:
                0 25px 50px -12px rgba(0, 0, 0, 0.5),
                inset 0 1px 0 rgba(255, 255, 255, 0.1);
            transition: transform 0.3s ease;
        }

        .calc-card:hover {
            transform: translateY(-4px);
        }

        .calc-header {
            text-align: center;
            margin-bottom: 2rem;
        }

        .calc-header h1 {
            font-size: 1.8rem;
            font-weight: 700;
            background: linear-gradient(135deg, #f093fb, #f5576c, #4facfe);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            letter-spacing: -0.5px;
        }

        .calc-header p {
            color: rgba(255, 255, 255, 0.5);
            font-size: 0.85rem;
            margin-top: 0.3rem;
            letter-spacing: 0.3px;
        }

        .input-group {
            display: flex;
            flex-direction: column;
            gap: 0.6rem;
            margin-bottom: 1.5rem;
        }

        .input-group label {
            color: rgba(255, 255, 255, 0.7);
            font-size: 0.8rem;
            font-weight: 500;
            text-transform: uppercase;
            letter-spacing: 0.5px;
        }

        .input-group input {
            padding: 0.9rem 1.2rem;
            border-radius: 1rem;
            border: 1px solid rgba(255, 255, 255, 0.1);
            background: rgba(255, 255, 255, 0.06);
            color: #fff;
            font-size: 1.1rem;
            font-family: inherit;
            outline: none;
            transition: all 0.25s ease;
        }

        .input-group input::placeholder {
            color: rgba(255, 255, 255, 0.3);
        }

        .input-group input:focus {
            border-color: #4facfe;
            box-shadow: 0 0 0 3px rgba(79, 172, 254, 0.2);
            background: rgba(255, 255, 255, 0.08);
        }

        input[type=number]::-webkit-inner-spin-button,
        input[type=number]::-webkit-outer-spin-button {
            -webkit-appearance: none;
            appearance: none;
            margin: 0;
        }
        input[type=number] {
            -moz-appearance: textfield;
        }

        .btn-grid {
            display: grid;
            grid-template-columns: repeat(4, 1fr);
            gap: 0.7rem;
            margin-bottom: 1rem;
        }

        .btn-grid input,
        .btn-all {
            padding: 0.8rem;
            border: none;
            border-radius: 1rem;
            font-size: 1.2rem;
            font-weight: 600;
            font-family: inherit;
            cursor: pointer;
            transition: all 0.2s ease;
            color: #fff;
        }

        .btn-op {
            background: linear-gradient(135deg, #667eea, #764ba2);
            box-shadow: 0 4px 15px rgba(102, 126, 234, 0.3);
        }
        .btn-op:hover {
            transform: scale(1.05);
            box-shadow: 0 6px 25px rgba(102, 126, 234, 0.5);
        }
        .btn-op:active {
            transform: scale(0.95);
        }

        .btn-all {
            width: 100%;
            background: linear-gradient(135deg, #f093fb, #f5576c);
            box-shadow: 0 4px 15px rgba(245, 87, 108, 0.3);
            font-size: 0.95rem;
            padding: 0.85rem;
            margin-bottom: 1.8rem;
        }
        .btn-all:hover {
            transform: scale(1.02);
            box-shadow: 0 6px 25px rgba(245, 87, 108, 0.5);
        }
        .btn-all:active {
            transform: scale(0.97);
        }

        .result-box {
            background: rgba(0, 0, 0, 0.3);
            border-radius: 1.2rem;
            padding: 1.2rem 1.5rem;
            min-height: 60px;
            border: 1px solid rgba(255, 255, 255, 0.06);
        }

        .result-box .result-label {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 1px;
            color: rgba(255, 255, 255, 0.35);
            margin-bottom: 0.4rem;
        }

        .result-box .result-content {
            color: #fff;
            font-size: 1rem;
            line-height: 1.7;
            word-break: break-word;
        }

        .result-box .result-content span {
            display: inline-block;
            background: rgba(79, 172, 254, 0.15);
            padding: 0.15rem 0.7rem;
            border-radius: 0.5rem;
            margin: 0.15rem 0.3rem 0.15rem 0;
            font-weight: 500;
        }

        .result-box .result-content .highlight-add { color: #4facfe; }
        .result-box .result-content .highlight-sub { color: #f093fb; }
        .result-box .result-content .highlight-mul { color: #43e97b; }
        .result-box .result-content .highlight-div { color: #f5576c; }

        .error-msg {
            color: #f5576c;
            font-weight: 500;
        }

        @media (max-width: 420px) {
            .calc-card {
                padding: 1.8rem 1.5rem;
            }
            .btn-grid {
                gap: 0.5rem;
            }
            .btn-grid input {
                font-size: 1rem;
                padding: 0.7rem;
            }
        }
    </style>
</head>
<body>
    <div class="calc-card">
        <div class="calc-header">
            <h1>Calculator</h1>
            <p>Enter two numbers &amp; pick an operation</p>
        </div>

        <form method="POST">
            <div class="input-group">
                <label for="no1">Number 1</label>
                <input type="number" step="any" name="no1" id="no1"
                       placeholder="e.g. 42" required
                       value="<?= htmlspecialchars($_POST['no1'] ?? '') ?>">
            </div>

            <div class="input-group">
                <label for="no2">Number 2</label>
                <input type="number" step="any" name="no2" id="no2"
                       placeholder="e.g. 7" required
                       value="<?= htmlspecialchars($_POST['no2'] ?? '') ?>">
            </div>

            <div class="btn-grid">
                <input type="submit" name="add" class="btn-op" value="+">
                <input type="submit" name="sub" class="btn-op" value="−">
                <input type="submit" name="mul" class="btn-op" value="×">
                <input type="submit" name="div" class="btn-op" value="÷">
            </div>

            <input type="submit" name="all" class="btn-all" value="📊 All Calculations">
        </form>

        <div class="result-box">
            <div class="result-label">Result</div>
            <div class="result-content">
                <?php
                function calculate(float|int $a, float|int $b, string $op) {
                    switch ($op) {
                        case 'add': return [$a + $b, 'Addition', 'highlight-add'];
                        case 'sub': return [$a - $b, 'Subtraction', 'highlight-sub'];
                        case 'mul': return [$a * $b, 'Multiplication', 'highlight-mul'];
                        case 'div':
                            if ($b == 0) return [null, 'Division', 'error-msg'];
                            return [$a / $b, 'Division', 'highlight-div'];
                    }
                }

                $ops = [
                    'add' => '+',
                    'sub' => '−',
                    'mul' => '×',
                    'div' => '÷',
                ];

                if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['no1'], $_POST['no2'])) {
                    $a = (float) $_POST['no1'];
                    $b = (float) $_POST['no2'];

                    if (isset($_POST['all'])) {
                        foreach (['add', 'sub', 'mul', 'div'] as $op) {
                            [$res, $label, $cls] = calculate($a, $b, $op);
                            $sym = $ops[$op];
                            if ($res === null) {
                                echo "<span class='$cls'>$label: ∞ (can't divide by zero)</span><br>";
                            } else {
                                echo "<span class='$cls'>$label: $a $sym $b = $res</span><br>";
                            }
                        }
                    } else {
                        foreach ($ops as $key => $sym) {
                            if (isset($_POST[$key])) {
                                [$res, $label, $cls] = calculate($a, $b, $key);
                                if ($res === null) {
                                    echo "<span class='error-msg'>∞ Can't divide by zero</span>";
                                } else {
                                    echo "<span class='$cls'>$a $sym $b = $res</span>";
                                }
                                break;
                            }
                        }
                    }
                } else {
                    echo '<span style="color: rgba(255,255,255,0.25);">Awaiting input…</span>';
                }
                ?>
            </div>
        </div>
    </div>
</body>
</html>

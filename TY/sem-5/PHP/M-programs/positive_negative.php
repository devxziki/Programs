<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Positive / Negative</title>
    <link href="https://fonts.googleapis.com/css2?family=Inter:opsz@14..32&display=swap" rel="stylesheet">
    <style>
        * { margin: 0; padding: 0; box-sizing: border-box; }
        body {
            font-family: 'Inter', system-ui, -apple-system, sans-serif;
            min-height: 100vh;
            display: flex;
            justify-content: center;
            align-items: center;
            background: linear-gradient(145deg, #0f0c29, #302b63, #24243e);
            padding: 1rem;
        }
        .card {
            background: rgba(255,255,255,0.05);
            backdrop-filter: blur(20px);
            -webkit-backdrop-filter: blur(20px);
            border: 1px solid rgba(255,255,255,0.1);
            border-radius: 2rem;
            padding: 2.5rem 2.8rem;
            width: 100%;
            max-width: 480px;
            box-shadow: 0 25px 50px -12px rgba(0,0,0,0.5), inset 0 1px 0 rgba(255,255,255,0.1);
            transition: transform 0.3s ease;
        }
        .card:hover { transform: translateY(-4px); }
        .header { text-align: center; margin-bottom: 2rem; }
        .header h1 {
            font-size: 1.8rem; font-weight: 700;
            background: linear-gradient(135deg, #f093fb, #4facfe);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            letter-spacing: -0.5px;
        }
        .header p { color: rgba(255,255,255,0.5); font-size: 0.85rem; margin-top: 0.3rem; }
        .input-group { margin-bottom: 1.5rem; }
        .input-group label {
            display: block;
            color: rgba(255,255,255,0.7);
            font-size: 0.8rem;
            font-weight: 500;
            text-transform: uppercase;
            letter-spacing: 0.5px;
            margin-bottom: 0.5rem;
        }
        .input-row {
            display: flex;
            gap: 0.7rem;
        }
        .input-row input[type="number"] {
            flex: 1;
            padding: 0.9rem 1.2rem;
            border-radius: 1rem;
            border: 1px solid rgba(255,255,255,0.1);
            background: rgba(255,255,255,0.06);
            color: #fff;
            font-size: 1.1rem;
            font-family: inherit;
            outline: none;
            transition: all 0.25s ease;
        }
        .input-row input[type="number"]:focus {
            border-color: #4facfe;
            box-shadow: 0 0 0 3px rgba(79,172,254,0.2);
            background: rgba(255,255,255,0.08);
        }
        .input-row input[type="number"]::placeholder { color: rgba(255,255,255,0.3); }
        .input-row input[type="submit"] {
            padding: 0.9rem 1.5rem;
            border: none;
            border-radius: 1rem;
            background: linear-gradient(135deg, #667eea, #764ba2);
            color: #fff;
            font-weight: 700;
            font-size: 0.9rem;
            font-family: inherit;
            cursor: pointer;
            transition: all 0.2s ease;
            white-space: nowrap;
        }
        .input-row input[type="submit"]:hover {
            transform: scale(1.03);
            box-shadow: 0 6px 20px rgba(102,126,234,0.3);
        }
        .input-row input[type="submit"]:active { transform: scale(0.97); }
        .result-box {
            background: rgba(0,0,0,0.3);
            border-radius: 1.2rem;
            padding: 1.5rem;
            min-height: 80px;
            border: 1px solid rgba(255,255,255,0.06);
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
        }
        .result-box .label {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 1px;
            color: rgba(255,255,255,0.35);
            margin-bottom: 0.5rem;
        }
        .result-display {
            display: flex;
            align-items: center;
            gap: 0.8rem;
        }
        .result-display .icon-badge {
            font-size: 2rem;
            line-height: 1;
        }
        .result-display .verdict {
            font-size: 1.5rem;
            font-weight: 700;
        }
        .verdict.positive { color: #43e97b; }
        .verdict.negative { color: #f5576c; }
        .verdict.zero { color: #4facfe; }
        .result-box .placeholder {
            color: rgba(255,255,255,0.2);
            font-style: italic;
            font-size: 0.9rem;
        }
        @media (max-width: 420px) {
            .card { padding: 1.8rem 1.5rem; }
            .input-row { flex-direction: column; }
        }
    </style>
</head>
<body>
    <div class="card">
        <div class="header">
            <h1>± Positive / Negative</h1>
            <p>Check if a number is positive, negative, or zero</p>
        </div>
        <form method="POST">
            <div class="input-group">
                <label for="no1">Enter a number</label>
                <div class="input-row">
                    <input type="number" step="any" name="no1" id="no1" placeholder="e.g. -7" required
                           value="<?= htmlspecialchars($_POST['no1'] ?? '') ?>">
                    <input type="submit" name="pn" value="Check">
                </div>
            </div>
        </form>
        <div class="result-box">
            <div class="label">Result</div>
            <?php
            if (isset($_POST['pn'])) {
                $a = (float) $_POST['no1'];
                if ($a < 0) {
                    $icon = '🔴';
                    $text = "$a is Negative";
                    $cls = 'negative';
                } elseif ($a > 0) {
                    $icon = '🟢';
                    $text = "$a is Positive";
                    $cls = 'positive';
                } else {
                    $icon = '🔵';
                    $text = 'Value is Zero';
                    $cls = 'zero';
                }
                echo "<div class='result-display'>";
                echo "<span class='icon-badge'>$icon</span>";
                echo "<span class='verdict $cls'>$text</span>";
                echo "</div>";
            } else {
                echo '<span class="placeholder">Awaiting input…</span>';
            }
            ?>
        </div>
    </div>
</body>
</html>

<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Switch Case</title>
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
            background: linear-gradient(135deg, #f093fb, #f5576c);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            letter-spacing: -0.5px;
        }
        .header p { color: rgba(255,255,255,0.5); font-size: 0.85rem; margin-top: 0.3rem; }
        .options-grid {
            display: grid;
            grid-template-columns: repeat(3, 1fr);
            gap: 0.6rem;
            margin-bottom: 1.5rem;
        }
        .option-card {
            background: rgba(0,0,0,0.2);
            border: 1px solid rgba(255,255,255,0.06);
            border-radius: 1rem;
            padding: 0.9rem 0.5rem;
            text-align: center;
            transition: all 0.2s ease;
            cursor: default;
        }
        .option-card:hover {
            background: rgba(0,0,0,0.3);
            transform: translateY(-2px);
        }
        .option-card .key {
            font-size: 1.3rem;
            font-weight: 700;
            color: rgba(255,255,255,0.8);
        }
        .option-card .color-name {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 0.5px;
            margin-top: 0.2rem;
        }
        .option-card .color-name.red { color: #f5576c; }
        .option-card .color-name.blue { color: #4facfe; }
        .option-card .color-name.black { color: #aaa; }
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
            border-color: #f5576c;
            box-shadow: 0 0 0 3px rgba(245,87,108,0.2);
            background: rgba(255,255,255,0.08);
        }
        .input-row input[type="number"]::placeholder { color: rgba(255,255,255,0.3); }
        .input-row input[type="submit"] {
            padding: 0.9rem 1.5rem;
            border: none;
            border-radius: 1rem;
            background: linear-gradient(135deg, #f093fb, #f5576c);
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
            box-shadow: 0 6px 20px rgba(245,87,108,0.3);
        }
        .input-row input[type="submit"]:active { transform: scale(0.97); }
        .result-box {
            background: rgba(0,0,0,0.3);
            border-radius: 1.2rem;
            padding: 1.2rem 1.5rem;
            min-height: 60px;
            border: 1px solid rgba(255,255,255,0.06);
            display: flex;
            align-items: center;
            justify-content: center;
            gap: 0.8rem;
        }
        .result-box .color-swatch {
            width: 2.5rem;
            height: 2.5rem;
            border-radius: 0.7rem;
            flex-shrink: 0;
        }
        .result-box .result-text {
            color: #fff;
            font-size: 1.1rem;
            font-weight: 600;
        }
        .result-box .result-text .highlight { font-weight: 700; }
        .result-box .placeholder {
            color: rgba(255,255,255,0.2);
            font-style: italic;
            font-size: 0.9rem;
        }
        @media (max-width: 420px) {
            .card { padding: 1.8rem 1.5rem; }
            .input-row { flex-direction: column; }
            .options-grid { grid-template-columns: repeat(3, 1fr); }
        }
    </style>
</head>
<body>
    <div class="card">
        <div class="header">
            <h1>◈ Switch Case</h1>
            <p>Pick a number to see its color</p>
        </div>

        <div class="options-grid">
            <div class="option-card">
                <div class="key">1</div>
                <div class="color-name red">Red</div>
            </div>
            <div class="option-card">
                <div class="key">2</div>
                <div class="color-name blue">Blue</div>
            </div>
            <div class="option-card">
                <div class="key">3</div>
                <div class="color-name black">Black</div>
            </div>
        </div>

        <form method="POST">
            <div class="input-group">
                <label for="no1">Enter 1, 2, or 3</label>
                <div class="input-row">
                    <input type="number" name="no1" id="no1" placeholder="e.g. 2" min="1" max="3" required
                           value="<?= htmlspecialchars($_POST['no1'] ?? '') ?>">
                    <input type="submit" name="switch" value="Check">
                </div>
            </div>
        </form>

        <div class="result-box">
            <?php
            if (isset($_POST['switch'])) {
                $a = (int) $_POST['no1'];
                switch ($a) {
                    case 1:
                        echo '<div class="color-swatch" style="background:#f5576c;"></div>';
                        echo '<span class="result-text"><span class="highlight" style="color:#f5576c;">1</span> → Red</span>';
                        break;
                    case 2:
                        echo '<div class="color-swatch" style="background:#4facfe;"></div>';
                        echo '<span class="result-text"><span class="highlight" style="color:#4facfe;">2</span> → Blue</span>';
                        break;
                    case 3:
                        echo '<div class="color-swatch" style="background:#333;"></div>';
                        echo '<span class="result-text"><span class="highlight" style="color:#aaa;">3</span> → Black</span>';
                        break;
                    default:
                        echo '<span class="result-text" style="color:#f5576c;">✕ Choose a valid option (1–3)</span>';
                        break;
                }
            } else {
                echo '<span class="placeholder">Awaiting input…</span>';
            }
            ?>
        </div>
    </div>
</body>
</html>

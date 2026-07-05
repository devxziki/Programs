<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>For Loop</title>
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
            max-width: 520px;
            box-shadow: 0 25px 50px -12px rgba(0,0,0,0.5), inset 0 1px 0 rgba(255,255,255,0.1);
            transition: transform 0.3s ease;
        }
        .card:hover { transform: translateY(-4px); }
        .header { text-align: center; margin-bottom: 2rem; }
        .header h1 {
            font-size: 1.8rem; font-weight: 700;
            background: linear-gradient(135deg, #43e97b, #38f9d7);
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
            border-color: #43e97b;
            box-shadow: 0 0 0 3px rgba(67,233,123,0.2);
            background: rgba(255,255,255,0.08);
        }
        .input-row input[type="number"]::placeholder { color: rgba(255,255,255,0.3); }
        .input-row input[type="submit"] {
            padding: 0.9rem 1.5rem;
            border: none;
            border-radius: 1rem;
            background: linear-gradient(135deg, #43e97b, #38f9d7);
            color: #0f0c29;
            font-weight: 700;
            font-size: 0.9rem;
            font-family: inherit;
            cursor: pointer;
            transition: all 0.2s ease;
            white-space: nowrap;
        }
        .input-row input[type="submit"]:hover {
            transform: scale(1.03);
            box-shadow: 0 6px 20px rgba(67,233,123,0.3);
        }
        .input-row input[type="submit"]:active { transform: scale(0.97); }
        .output-box {
            background: rgba(0,0,0,0.3);
            border-radius: 1.2rem;
            padding: 1.2rem 1.5rem;
            min-height: 60px;
            border: 1px solid rgba(255,255,255,0.06);
        }
        .output-box .label {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 1px;
            color: rgba(255,255,255,0.35);
            margin-bottom: 0.6rem;
        }
        .output-box .numbers {
            display: flex;
            flex-wrap: wrap;
            gap: 0.4rem;
            max-height: 180px;
            overflow-y: auto;
            padding-right: 0.3rem;
        }
        .output-box .numbers::-webkit-scrollbar {
            width: 4px;
        }
        .output-box .numbers::-webkit-scrollbar-track {
            background: transparent;
        }
        .output-box .numbers::-webkit-scrollbar-thumb {
            background: rgba(255,255,255,0.15);
            border-radius: 2rem;
        }
        .output-box .numbers .num-tag {
            display: flex;
            align-items: center;
            justify-content: center;
            width: 2.6rem;
            height: 2.6rem;
            border-radius: 0.6rem;
            background: rgba(67,233,123,0.12);
            border: 1px solid rgba(67,233,123,0.15);
            color: #43e97b;
            font-weight: 600;
            font-size: 0.85rem;
        }
        .output-box .placeholder {
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
            <h1>⟳ For Loop</h1>
            <p>Print numbers from 0 to n−1</p>
        </div>
        <form method="POST">
            <div class="input-group">
                <label for="no1">Enter a number</label>
                <div class="input-row">
                    <input type="number" name="no1" id="no1" placeholder="e.g. 10" required
                           value="<?= htmlspecialchars($_POST['no1'] ?? '') ?>">
                    <input type="submit" name="for" value="Run">
                </div>
            </div>
        </form>
        <div class="output-box">
            <div class="label">Output</div>
            <div class="numbers">
                <?php
                if (isset($_POST['for'])) {
                    $a = (int) $_POST['no1'];
                    for ($i = 0; $i < $a; $i++) {
                        echo "<span class='num-tag'>$i</span>";
                    }
                } else {
                    echo '<span class="placeholder">Awaiting input…</span>';
                }
                ?>
            </div>
        </div>
    </div>
</body>
</html>

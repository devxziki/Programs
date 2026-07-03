<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arithmetic</title>
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
        .card {
            background: rgba(255, 255, 255, 0.05);
            backdrop-filter: blur(20px);
            -webkit-backdrop-filter: blur(20px);
            border: 1px solid rgba(255, 255, 255, 0.1);
            border-radius: 2rem;
            padding: 2.5rem 2.8rem;
            width: 100%;
            max-width: 480px;
            box-shadow: 0 25px 50px -12px rgba(0,0,0,0.5), inset 0 1px 0 rgba(255,255,255,0.1);
            transition: transform 0.3s ease;
        }
        .card:hover { transform: translateY(-4px); }
        .header {
            text-align: center;
            margin-bottom: 2rem;
        }
        .header h1 {
            font-size: 1.8rem;
            font-weight: 700;
            background: linear-gradient(135deg, #f093fb, #f5576c, #4facfe);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            letter-spacing: -0.5px;
        }
        .header p {
            color: rgba(255,255,255,0.5);
            font-size: 0.85rem;
            margin-top: 0.3rem;
        }
        .value-row {
            display: flex;
            justify-content: center;
            gap: 1.5rem;
            margin-bottom: 1.8rem;
            flex-wrap: wrap;
        }
        .value-pill {
            background: rgba(0,0,0,0.25);
            border: 1px solid rgba(255,255,255,0.06);
            border-radius: 2rem;
            padding: 0.5rem 1.5rem;
            display: flex;
            align-items: center;
            gap: 0.5rem;
        }
        .value-pill .label {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 1px;
            color: rgba(255,255,255,0.3);
        }
        .value-pill .num {
            font-size: 1.3rem;
            font-weight: 700;
            color: #fff;
        }
        .value-pill .num.a { color: #4facfe; }
        .value-pill .num.b { color: #f093fb; }
        .op-list {
            display: flex;
            flex-direction: column;
            gap: 0.6rem;
        }
        .op-row {
            display: flex;
            align-items: center;
            background: rgba(0,0,0,0.2);
            border-radius: 1rem;
            padding: 0.8rem 1.2rem;
            border: 1px solid rgba(255,255,255,0.04);
            transition: all 0.2s ease;
        }
        .op-row:hover {
            background: rgba(0,0,0,0.3);
            border-color: rgba(255,255,255,0.1);
            transform: translateX(4px);
        }
        .op-symbol {
            width: 2.2rem;
            height: 2.2rem;
            border-radius: 0.7rem;
            display: flex;
            align-items: center;
            justify-content: center;
            font-weight: 700;
            font-size: 1.1rem;
            margin-right: 1rem;
            flex-shrink: 0;
        }
        .op-symbol.add { background: rgba(79,172,254,0.2); color: #4facfe; }
        .op-symbol.sub { background: rgba(240,147,251,0.2); color: #f093fb; }
        .op-symbol.mul { background: rgba(67,233,123,0.2); color: #43e97b; }
        .op-symbol.div { background: rgba(245,87,108,0.2); color: #f5576c; }
        .op-name {
            flex: 1;
            color: rgba(255,255,255,0.5);
            font-size: 0.85rem;
        }
        .op-result {
            font-size: 1.1rem;
            font-weight: 600;
            color: #fff;
        }
        .footer-note {
            text-align: center;
            color: rgba(255,255,255,0.2);
            font-size: 0.75rem;
            margin-top: 1.5rem;
        }
        @media (max-width: 420px) {
            .card { padding: 1.8rem 1.5rem; }
        }
    </style>
</head>
<body>
    <div class="card">
        <div class="header">
            <h1>✦ Arithmetic</h1>
            <p>Basic operations on two numbers</p>
        </div>

        <?php
        $a = 10;
        $b = 20;
        $add = $a + $b;
        $sub = $a - $b;
        $mul = $a * $b;
        $div = $a / $b;
        ?>

        <div class="value-row">
            <div class="value-pill">
                <span class="label">A</span>
                <span class="num a"><?= $a ?></span>
            </div>
            <div class="value-pill">
                <span class="label">B</span>
                <span class="num b"><?= $b ?></span>
            </div>
        </div>

        <div class="op-list">
            <div class="op-row">
                <div class="op-symbol add">+</div>
                <span class="op-name">Addition</span>
                <span class="op-result"><?= $add ?></span>
            </div>
            <div class="op-row">
                <div class="op-symbol sub">−</div>
                <span class="op-name">Subtraction</span>
                <span class="op-result"><?= $sub ?></span>
            </div>
            <div class="op-row">
                <div class="op-symbol mul">×</div>
                <span class="op-name">Multiplication</span>
                <span class="op-result"><?= $mul ?></span>
            </div>
            <div class="op-row">
                <div class="op-symbol div">÷</div>
                <span class="op-name">Division</span>
                <span class="op-result"><?= $div ?></span>
            </div>
        </div>

        <div class="footer-note">A = <?= $a ?> &nbsp;·&nbsp; B = <?= $b ?></div>
    </div>
</body>
</html>

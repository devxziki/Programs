<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Interest</title>
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
            background: linear-gradient(135deg, #f093fb, #f5576c);
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
        .formula-badge {
            text-align: center;
            margin-bottom: 1.8rem;
        }
        .formula-badge .box {
            display: inline-block;
            background: rgba(0,0,0,0.3);
            border: 1px solid rgba(255,255,255,0.06);
            border-radius: 1rem;
            padding: 0.6rem 1.5rem;
            font-size: 1.1rem;
            font-weight: 600;
            color: rgba(255,255,255,0.8);
            font-style: italic;
        }
        .formula-badge .box span { color: #f5576c; }
        .grid {
            display: flex;
            flex-direction: column;
            gap: 0.7rem;
            margin-bottom: 1.8rem;
        }
        .grid-item {
            display: flex;
            justify-content: space-between;
            align-items: center;
            background: rgba(0,0,0,0.2);
            border-radius: 1rem;
            padding: 0.9rem 1.2rem;
            border: 1px solid rgba(255,255,255,0.04);
            transition: all 0.2s ease;
        }
        .grid-item:hover {
            background: rgba(0,0,0,0.3);
            border-color: rgba(255,255,255,0.1);
            transform: translateX(4px);
        }
        .grid-item .label {
            display: flex;
            align-items: center;
            gap: 0.6rem;
            color: rgba(255,255,255,0.5);
            font-size: 0.85rem;
        }
        .grid-item .label .icon {
            width: 1.8rem;
            height: 1.8rem;
            border-radius: 0.5rem;
            display: flex;
            align-items: center;
            justify-content: center;
            font-size: 0.8rem;
            flex-shrink: 0;
        }
        .icon.p { background: rgba(79,172,254,0.2); color: #4facfe; }
        .icon.r { background: rgba(67,233,123,0.2); color: #43e97b; }
        .icon.t { background: rgba(240,147,251,0.2); color: #f093fb; }
        .icon.si { background: rgba(245,87,108,0.2); color: #f5576c; }
        .grid-item .value {
            font-size: 1.2rem;
            font-weight: 600;
            color: #fff;
        }
        .result-highlight {
            text-align: center;
            margin-top: 0.5rem;
        }
        .result-highlight .big {
            font-size: 2.5rem;
            font-weight: 800;
            color: #f5576c;
        }
        .result-highlight .big-label {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 1px;
            color: rgba(255,255,255,0.3);
            margin-top: 0.2rem;
        }
        .footer-note {
            text-align: center;
            color: rgba(255,255,255,0.2);
            font-size: 0.75rem;
            margin-top: 1.5rem;
        }
        @media (max-width: 420px) {
            .card { padding: 1.8rem 1.5rem; }
            .result-highlight .big { font-size: 2rem; }
        }
    </style>
</head>
<body>
    <div class="card">
        <div class="header">
            <h1>✦ Simple Interest</h1>
            <p>Calculate interest on your principal</p>
        </div>

        <?php
        $price = 5000;
        $rate  = 3;
        $year  = 3;
        $si    = $price * $rate * $year / 100;
        ?>

        <div class="formula-badge">
            <div class="box">SI = <span>P × R × T</span> / 100</div>
        </div>

        <div class="grid">
            <div class="grid-item">
                <span class="label"><span class="icon p">P</span> Principal</span>
                <span class="value">₹<?= number_format($price) ?></span>
            </div>
            <div class="grid-item">
                <span class="label"><span class="icon r">R</span> Rate of Interest</span>
                <span class="value"><?= $rate ?>%</span>
            </div>
            <div class="grid-item">
                <span class="label"><span class="icon t">T</span> Time Period</span>
                <span class="value"><?= $year ?> year<?= $year > 1 ? 's' : '' ?></span>
            </div>
        </div>

        <div class="result-highlight">
            <div class="big">₹<?= number_format($si, 2) ?></div>
            <div class="big-label">Simple Interest</div>
        </div>

        <div class="footer-note">
            Total amount: ₹<?= number_format($price + $si, 2) ?>
        </div>
    </div>
</body>
</html>

<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Swap</title>
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

        .swap-card {
            background: rgba(255, 255, 255, 0.05);
            backdrop-filter: blur(20px);
            -webkit-backdrop-filter: blur(20px);
            border: 1px solid rgba(255, 255, 255, 0.1);
            border-radius: 2rem;
            padding: 2.5rem 2.8rem;
            width: 100%;
            max-width: 520px;
            box-shadow:
                0 25px 50px -12px rgba(0, 0, 0, 0.5),
                inset 0 1px 0 rgba(255, 255, 255, 0.1);
            transition: transform 0.3s ease;
        }

        .swap-card:hover {
            transform: translateY(-4px);
        }

        .swap-header {
            text-align: center;
            margin-bottom: 2rem;
        }

        .swap-header h1 {
            font-size: 1.8rem;
            font-weight: 700;
            background: linear-gradient(135deg, #43e97b, #38f9d7);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            letter-spacing: -0.5px;
        }

        .swap-header p {
            color: rgba(255, 255, 255, 0.5);
            font-size: 0.85rem;
            margin-top: 0.3rem;
        }

        .method-section {
            margin-bottom: 1.8rem;
        }

        .method-section:last-child {
            margin-bottom: 0;
        }

        .method-label {
            display: flex;
            align-items: center;
            gap: 0.6rem;
            margin-bottom: 0.8rem;
        }

        .method-label .badge {
            display: inline-block;
            padding: 0.25rem 0.8rem;
            border-radius: 2rem;
            font-size: 0.7rem;
            font-weight: 600;
            text-transform: uppercase;
            letter-spacing: 0.5px;
        }

        .badge-third {
            background: rgba(79, 172, 254, 0.2);
            color: #4facfe;
        }

        .badge-without {
            background: rgba(67, 233, 123, 0.2);
            color: #43e97b;
        }

        .method-label span:not(.badge) {
            color: rgba(255, 255, 255, 0.5);
            font-size: 0.75rem;
        }

        .var-grid {
            display: flex;
            gap: 1rem;
            flex-wrap: wrap;
        }

        .var-box {
            flex: 1;
            min-width: 100px;
            background: rgba(0, 0, 0, 0.25);
            border: 1px solid rgba(255, 255, 255, 0.06);
            border-radius: 1rem;
            padding: 1rem 1.2rem;
            text-align: center;
            transition: all 0.3s ease;
        }

        .var-box .var-name {
            font-size: 0.7rem;
            text-transform: uppercase;
            letter-spacing: 1px;
            color: rgba(255, 255, 255, 0.3);
            margin-bottom: 0.3rem;
        }

        .var-box .var-value {
            font-size: 1.8rem;
            font-weight: 700;
            color: #fff;
        }

        .var-box.highlight-a .var-value { color: #4facfe; }
        .var-box.highlight-b .var-value { color: #f093fb; }

        .arrow-row {
            display: flex;
            justify-content: center;
            align-items: center;
            gap: 0.5rem;
            margin: 0.5rem 0;
            color: rgba(255, 255, 255, 0.2);
            font-size: 1.5rem;
        }

        .divider {
            height: 1px;
            background: linear-gradient(90deg, transparent, rgba(255,255,255,0.1), transparent);
            margin: 1.5rem 0;
        }

        .footer-note {
            text-align: center;
            color: rgba(255, 255, 255, 0.2);
            font-size: 0.75rem;
            margin-top: 1.5rem;
            letter-spacing: 0.3px;
        }

        @media (max-width: 420px) {
            .swap-card {
                padding: 1.8rem 1.5rem;
            }
            .var-box .var-value {
                font-size: 1.4rem;
            }
        }
    </style>
</head>
<body>
    <div class="swap-card">
        <div class="swap-header">
            <h1>⇄ Swap</h1>
            <p>Two ways to swap values</p>
        </div>

        <?php
        // --- Method 1: Using third variable ---
        $a1 = 10;
        $b1 = 20;

        $temp = $a1;
        $a1 = $b1;
        $b1 = $temp;
        ?>

        <div class="method-section">
            <div class="method-label">
                <span class="badge badge-third">Third Variable</span>
                <span>temp = a → a = b → b = temp</span>
            </div>
            <div class="var-grid">
                <div class="var-box highlight-a">
                    <div class="var-name">A</div>
                    <div class="var-value">10</div>
                </div>
                <div class="var-box highlight-b">
                    <div class="var-name">B</div>
                    <div class="var-value">20</div>
                </div>
            </div>
            <div class="arrow-row">⇓</div>
            <div class="var-grid">
                <div class="var-box highlight-a">
                    <div class="var-name">A (after)</div>
                    <div class="var-value"><?= $a1 ?></div>
                </div>
                <div class="var-box highlight-b">
                    <div class="var-name">B (after)</div>
                    <div class="var-value"><?= $b1 ?></div>
                </div>
            </div>
        </div>

        <div class="divider"></div>

        <?php
        // --- Method 2: Without third variable (arithmetic) ---
        $a2 = 10;
        $b2 = 20;

        $a2 = $a2 + $b2;
        $b2 = $a2 - $b2;
        $a2 = $a2 - $b2;
        ?>

        <div class="method-section">
            <div class="method-label">
                <span class="badge badge-without">No Third Variable</span>
                <span>a = a+b → b = a−b → a = a−b</span>
            </div>
            <div class="var-grid">
                <div class="var-box highlight-a">
                    <div class="var-name">A</div>
                    <div class="var-value">10</div>
                </div>
                <div class="var-box highlight-b">
                    <div class="var-name">B</div>
                    <div class="var-value">20</div>
                </div>
            </div>
            <div class="arrow-row">⇓</div>
            <div class="var-grid">
                <div class="var-box highlight-a">
                    <div class="var-name">A (after)</div>
                    <div class="var-value"><?= $a2 ?></div>
                </div>
                <div class="var-box highlight-b">
                    <div class="var-name">B (after)</div>
                    <div class="var-value"><?= $b2 ?></div>
                </div>
            </div>
        </div>

        <div class="footer-note">Both methods produce the same result</div>
    </div>
</body>
</html>

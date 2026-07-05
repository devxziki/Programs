<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Demo</title>
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
            padding: 3rem 3.5rem;
            width: 100%;
            max-width: 480px;
            box-shadow: 0 25px 50px -12px rgba(0,0,0,0.5), inset 0 1px 0 rgba(255,255,255,0.1);
            transition: transform 0.3s ease;
            text-align: center;
        }
        .card:hover { transform: translateY(-4px); }
        .globe {
            font-size: 3.5rem;
            margin-bottom: 1rem;
            display: block;
        }
        h1 {
            font-size: 1.8rem;
            font-weight: 700;
            background: linear-gradient(135deg, #43e97b, #38f9d7);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            letter-spacing: -0.5px;
            margin-bottom: 1.5rem;
        }
        .hello-box {
            display: inline-block;
            background: rgba(79, 172, 254, 0.1);
            border: 1px solid rgba(79, 172, 254, 0.2);
            border-radius: 1.2rem;
            padding: 1.2rem 2.5rem;
            transition: all 0.3s ease;
        }
        .hello-box:hover {
            background: rgba(79, 172, 254, 0.15);
            box-shadow: 0 0 30px rgba(79, 172, 254, 0.1);
            transform: scale(1.02);
        }
        .hello-text {
            font-size: 2rem;
            font-weight: 600;
            color: #4facfe;
            letter-spacing: 2px;
        }
        .cursor {
            display: inline-block;
            width: 3px;
            height: 1.8rem;
            background: #4facfe;
            margin-left: 4px;
            animation: blink 1s step-end infinite;
            vertical-align: text-bottom;
        }
        @keyframes blink {
            50% { opacity: 0; }
        }
        .footer-note {
            color: rgba(255,255,255,0.2);
            font-size: 0.75rem;
            margin-top: 2rem;
        }
        @media (max-width: 420px) {
            .card { padding: 2rem 1.5rem; }
            .hello-text { font-size: 1.5rem; }
        }
    </style>
</head>
<body>
    <div class="card">
        <span class="globe">🌐</span>
        <h1>Welcome to PHP</h1>
        <div class="hello-box">
            <span class="hello-text">
                <?php echo "Hello World"; ?>
                <span class="cursor"></span>
            </span>
        </div>
        <div class="footer-note">My first PHP program</div>
    </div>
</body>
</html>

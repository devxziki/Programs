<!-- 10. Write a PHP script to print the Fibonacci series (1 1 2 3 5 8 13 21...). -->
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Get Fibonacci Series: </h3>
				Enter value :  <input type="text" name="no1"><br>
				<input type="submit" name="check" value="Fibonacci series "><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$n = $_POST['no1'];
                    $a=1;
                    $b=1;
                    echo "<h3>Fibonacci Series:</h3>";

                    if($n>=1){
                        echo $a." ";
                    }
                    if($n>=2){
                        echo $b." ";
                    }

                    for ($i=3; $i<=$n; $i++){
                        $c=$a+$b;
                        echo $c." ";
                        $a=$b;
                        $b=$c;

                    }
				}
			?>
		</body>
</html>
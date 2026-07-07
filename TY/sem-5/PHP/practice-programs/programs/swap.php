<html>
	<head>
	</head>
	
		<body>
			<?php
				$a=10;
				$b=20;
				$C; 
				
				$c=$a;
				$a=$b;
				$b=$c;
					echo "Using third Variable"."<br>";
					echo "A:".$a."<br>";
					echo "B:".$b."<br>";
				
				$d=10;
				$e=20;
				
				$d=$d+$e;	
				$e=$d-$e;
				$d=$d-$e;
					echo "Without Third Variable"."<br>";
					echo"D = ".$d."<br>";
					echo"E = ".$e."<br>";
			?>
		</body>
</html>
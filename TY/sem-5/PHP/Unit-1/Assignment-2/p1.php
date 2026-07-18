<html>
	<head> 
	
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value TO Find The Greatest of 3 Numbers: </h3>
				Enter Value 1 <input type="text" name="no1"><br>
				Enter Value 2 <input type="text" name="no2"><br>
				Enter Value 3 <input type="text" name="no3"><br>
				<input type="submit" name="Check" value="Check Greatest of 3 Numbers "><br>
			</form>
			
				<?php
					if(isset($_POST['Check'])){
						$a=$_POST['no1'];
						$b=$_POST['no2'];
						$c=$_POST['no3'];
						
						if($a>$b && $a>$c){
							echo $a." IS Greatest";
						}
						else if ($b>$a && $b>$c){
							echo $b." IS Greatest";
						}
						else{
							echo $c." IS Greatest";
						}
					}
				?>
		</body>
</html>
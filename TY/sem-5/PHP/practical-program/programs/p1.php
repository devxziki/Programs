<!-- 1. Write a PHP script to check whether the entered number is odd or even -->
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To check Odd or Even: </h3>
				Enter value <input type="text" name="no1">
				<input type="submit" name="check" value="Check Odd or Even"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$no1 = $_POST['no1'];
                    
					if ($no1 % 2 == 0) {
						echo "$no1 is an even number.";
					} 
                    else {
						echo "$no1 is an odd number.";
					}
				}
			?>
		</body>
</html>
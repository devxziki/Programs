<!-- 5. Write a PHP script to check whether the entered year is a leap year or not. -->
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To check That it is Leap year Or Not: </h3>
				Enter value <input type="text" name="no1">
				<input type="submit" name="check" value="Check Leap Year Or Not"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$no1 = $_POST['no1'];
                    
					if ($no1 % 4 == 0) {
						echo "$no1 is An Leap Year.";
					} 
                    else {
						echo "$no1 is Not An Leap Year.";
					}
				}
			?>
		</body>
</html>
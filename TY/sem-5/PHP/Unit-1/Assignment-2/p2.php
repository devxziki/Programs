<html>
	<head>
	</head>
	<body>
		<form method="POST">
		<?php
		for($i=1;$i<=10;$i++)
		{
			echo "Number:".($i).":<input type='text' name='num[]'><br><br>";
		}
		?>
			<input type="Submit" name="check" value="Click"><br>
		</form>
	</body>
</html>

<?php
	if(isset($_POST['check']))
	{
		$number=$_POST['num'];
		
		sort($number);
		
		echo "<b><h> Number in Ascending Order:</b></h><br>";
		foreach($number as $value)
		{
			echo $value."<br>";
		}
	}
?>


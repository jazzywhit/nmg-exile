_victim = _this select 0 select 0;

_blood = 20;

while {alive _victim} do
{
	_amount = 1 + floor (random 3);
	_blood = _blood - _amount;
	if (_blood <= 0) then
	{
		_victim setDamage 1;
	};
	sleep 1;	
};

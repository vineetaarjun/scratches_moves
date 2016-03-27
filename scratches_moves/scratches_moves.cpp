#include <iostream>
#include <set>
#include <map>

using namespace std;

struct numNs
{
	int numzeroes;
	int numones;
	int numtwos;
	int numthrees;
	int numfours;
	int numfives;
	int numsixes;
	int numsevens;

    bool operator==(const numNs  &) const;
    numNs& operator=(const numNs  &);
    bool operator!=(const numNs  &) const;
    bool operator<(const numNs  &) const;
    bool operator>(const numNs  &) const;
};

bool numNs::operator== (const numNs  &n) const
{
	return (numzeroes==n.numzeroes &&
				numones==n.numones &&
				numtwos==n.numtwos &&
				numthrees==n.numthrees &&
				numfours == n.numfours &&
				numfives == n.numfives &&
				numsixes == n.numsixes &&
				numsevens == n.numsevens);
}

bool numNs::operator!=(const numNs  &n) const
{
	return !(numzeroes==n.numzeroes &&
				numones==n.numones &&
				numtwos==n.numtwos &&
				numthrees==n.numthrees &&
				numfours == n.numfours &&
				numfives == n.numfives &&
				numsixes == n.numsixes &&
				numsevens == n.numsevens);
}

numNs& numNs::operator=(const numNs  &n)
{
	numzeroes = n.numzeroes;
	numones = n.numones;
	numtwos = n.numtwos;
	numthrees = n.numthrees;
	numfours = n.numfours;
	numfives = n.numfives;
	numsixes = n.numsixes;
	numsevens = n.numsevens;
	return *this;
}

bool numNs::operator<(const numNs  &n) const
{
	if(numzeroes < n.numzeroes)
	{
		return true;
	}
	else if(numzeroes > n.numzeroes)
	{
		return false;
	}
	else if(numones < n.numones)
	{
		return true;
	}
	else if(numones > n.numones)
	{
		return false;
	}
	else if(numtwos < n.numtwos)
	{
		return true;
	}
	else if(numtwos > n.numtwos)
	{
		return false;
	}
	else if(numthrees < n.numthrees)
	{
		return true;
	}
	else if(numthrees > n.numthrees)
	{
		return false;
	}
	else if(numfours < n.numfours)
	{
		return true;
	}
	else if(numfours > n.numfours)
	{
		return false;
	}
	else if(numfives < n.numfives)
	{
		return true;
	}
	else if(numfives > n.numfives)
	{
		return false;
	}
	else if(numsixes < n.numsixes)
	{
		return true;
	}
	else if(numsixes > n.numsixes)
	{
		return false;
	}
	else
	{
		return (numones < n.numones);
	}
}

bool numNs::operator>(const numNs  &n) const
{
	if(numzeroes < n.numzeroes)
	{
		return false;
	}
	else if(numzeroes > n.numzeroes)
	{
		return true;
	}
	else if(numones < n.numones)
	{
		return false;
	}
	else if(numones > n.numones)
	{
		return true;
	}
	else if(numtwos < n.numtwos)
	{
		return false;
	}
	else if(numtwos > n.numtwos)
	{
		return true;
	}
	else if(numthrees < n.numthrees)
	{
		return false;
	}
	else if(numthrees > n.numthrees)
	{
		return true;
	}
	else if(numfours < n.numfours)
	{
		return false;
	}
	else if(numfours > n.numfours)
	{
		return true;
	}
	else if(numfives < n.numfives)
	{
		return false;
	}
	else if(numfives > n.numfives)
	{
		return true;
	}
	else if(numsixes < n.numsixes)
	{
		return false;
	}
	else if(numsixes > n.numsixes)
	{
		return true;
	}
	else
	{
		return (numones > n.numones);
	}
}

struct position
{
	int a;
	int b;
	int c;
	int d;

    bool operator==(const position  &) const;
    position& operator=(const position  &);
    bool operator!=(const position  &) const;
    bool operator<(const position  &) const;
    bool operator>(const position  &) const;
};

bool position::operator== (const position  &p) const
{
	return (a==p.a && b==p.b && c==p.c && d==p.d);
}

bool position::operator!=(const position  &p) const
{
	return !(a==p.a && b==p.b && c==p.c && d==p.d);
}

bool position::operator<(const position  &p) const
{
	if(a < p.a)
	{
		return true;
	}
	else if(a > p.a)
	{
		return false;
	}
	else if(b < p.b)
	{
		return true;
	}
	else if(b > p.b)
	{
		return false;
	}
	else if(c < p.c)
	{
		return true;
	}
	else if(c > p.c)
	{
		return false;
	}
	else
	{
		return d < p.d;
	}
}

bool position::operator>(const position  &p) const
{
	if(a < p.a)
	{
		return false;
	}
	else if(a > p.a)
	{
		return true;
	}
	else if(b < p.b)
	{
		return false;
	}
	else if(b > p.b)
	{
		return true;
	}
	else if(c < p.c)
	{
		return false;
	}
	else if(c > p.c)
	{
		return true;
	}
	else
	{
		return d > p.d;
	}
}

position& position::operator=(const position  &p)
{
	a = p.a;
	b = p.b;
	c = p.c;
	d = p.d;
	return *this;
}

struct possibleWinningMove
{
	numNs move;
	position winning_move;
	int num_scratches;

    bool operator==(const possibleWinningMove  &) const;
    possibleWinningMove& operator=(const possibleWinningMove  &);
    bool operator!=(const possibleWinningMove  &) const;
    bool operator<(const possibleWinningMove  &) const;
};

bool possibleWinningMove::operator== (const possibleWinningMove  &p) const
{
	return (move==p.move && num_scratches==p.num_scratches && winning_move == p.winning_move);
}

bool possibleWinningMove::operator!=(const possibleWinningMove  &p) const
{
	return !(move==p.move && num_scratches==p.num_scratches && winning_move == p.winning_move);
}

bool possibleWinningMove::operator<(const possibleWinningMove  &p) const
{
	if(move < p.move)
	{
		return true;
	}
	else if(move > p.move)
	{
		return false;
	}
	if(winning_move < p.winning_move)
	{
		return true;
	}
	else if(winning_move > p.winning_move)
	{
		return false;
	}
	else
	{
		return num_scratches < p.num_scratches;
	}
}

possibleWinningMove& possibleWinningMove::operator=(const possibleWinningMove  &p)
{
	move = p.move;
	winning_move = p.winning_move;
	num_scratches = p.num_scratches;
	return *this;
}

set<position> winning_positions;
typedef set<position>::iterator win_iter;

set<position> losing_positions;
typedef set<position>::iterator lose_iter;

set<numNs> losing_numNs;
set<numNs> winning_numNs;
typedef set<numNs>::iterator numNs_iter;

map< position, set<possibleWinningMove> > final_moves;
typedef map< position, set<possibleWinningMove> >::iterator final_moves_iter;

static void seedWinningPositions()
{
	numNs winner = {0};
	numNs loser = {0};
	position pos;

	loser.numzeroes = 3;
	loser.numones = 1;
	losing_numNs.insert(loser);

	pos.a = pos.b = pos.c = 0;
	pos.d = 1;
	losing_positions.insert(pos);

	pos.a = pos.b = pos.d = 0;
	pos.c = 1;
	losing_positions.insert(pos);

	pos.a = pos.d = pos.c = 0;
	pos.b = 1;
	losing_positions.insert(pos);

	pos.d = pos.b = pos.c = 0;
	pos.a = 1;
	losing_positions.insert(pos);


	winner.numzeroes = 2;
	winner.numones = 2;

	winning_numNs.insert(winner);

//	pos.a = pos.b = 0;
//	pos.c = pos.d = 1;
//	pos_move.a = pos_move.b = 0;
//	pos_move.c = 0;
//	pos_move.d = 1;
//	winning_positions.insert(pos);
//	moves.insert(std::pair<position, position>(pos, pos_move));
//
//	pos.a = pos.c = 0;
//	pos.b = pos.d = 1;
//	pos_move.a = pos_move.b = 0;
//	pos_move.c = 0;
//	pos_move.d = 1;
//	winning_positions.insert(pos);
//	moves.insert(std::pair<position, position>(pos, pos_move));
//
//	pos.a = pos.d = 0;
//	pos.c = pos.b = 1;
//	pos_move.a = pos_move.b = 0;
//	pos_move.c = 1;
//	pos_move.d = 0;
//	winning_positions.insert(pos);
//	moves.insert(std::pair<position, position>(pos, pos_move));
//
//	pos.c = pos.b = 0;
//	pos.a = pos.d = 1;
//	pos_move.a = pos_move.b = 0;
//	pos_move.c = 0;
//	pos_move.d = 1;
//	winning_positions.insert(pos);
//	moves.insert(std::pair<position, position>(pos, pos_move));
//
//	pos.d = pos.b = 0;
//	pos.c = pos.a = 1;
//	pos_move.a = pos_move.b = 0;
//	pos_move.c = 1;
//	pos_move.d = 0;
//	winning_positions.insert(pos);
//	moves.insert(std::pair<position, position>(pos, pos_move));
//
//	pos.a = pos.b = 1;
//	pos.c = pos.d = 0;
//	pos_move.a = 0;
//	pos_move.b = 1;
//	pos_move.c = 0;
//	pos_move.d = 0;
//	winning_positions.insert(pos);
//	moves.insert(std::pair<position, position>(pos, pos_move));

}

static void calculateNumNs(position *pos, numNs *ns)
{
	ns->numzeroes = ns->numones = ns->numtwos = ns->numthrees =
			ns->numfours = ns->numfives = ns->numsixes = ns->numsevens = 0;

	switch(pos->a)
	{
		case 0 : ++(ns->numzeroes); break;
		case 1 : ++(ns->numones); break;
	}

	switch(pos->b)
	{
		case 0 : ++(ns->numzeroes); break;
		case 1 : ++(ns->numones); break;
		case 2 : ++(ns->numtwos); break;
		case 3 : ++(ns->numthrees); break;
	}

	switch(pos->c)
	{
		case 0 : ++(ns->numzeroes); break;
		case 1 : ++(ns->numones); break;
		case 2 : ++(ns->numtwos); break;
		case 3 : ++(ns->numthrees); break;
		case 4 : ++(ns->numfours); break;
		case 5 : ++(ns->numfives); break;
	}

	switch(pos->d)
	{
		case 0 : ++(ns->numzeroes); break;
		case 1 : ++(ns->numones); break;
		case 2 : ++(ns->numtwos); break;
		case 3 : ++(ns->numthrees); break;
		case 4 : ++(ns->numfours); break;
		case 5 : ++(ns->numfives); break;
		case 6 : ++(ns->numsixes); break;
		case 7 : ++(ns->numsevens); break;
	}
}

static void calculateWinningMove(position *pos, position *pos_move, numNs *ns, numNs *ns_move,
		int num_scratches)
{

	*pos_move = *pos;

	if(ns->numsevens > ns_move->numsevens)
	{
		pos_move->d = pos_move->d - num_scratches;
		return;
	}
	if(ns->numsixes > ns_move->numsixes)
	{
		pos_move->d = pos_move->d - num_scratches;
		return;
	}
	if(ns->numfives > ns_move->numfives)
	{
		if(pos->c == 5)
		{
			pos_move->c = pos_move->c - num_scratches;
		}
		else
		{
			pos_move->d = pos_move->d - num_scratches;
		}

		return;
	}
	if(ns->numfours > ns_move->numfours)
	{
		if(pos->c == 4)
		{
			pos_move->c = pos_move->c - num_scratches;
		}
		else
		{
			pos_move->d = pos_move->d - num_scratches;
		}

		return;
	}
	if(ns->numthrees > ns_move->numthrees)
	{
		if(pos->b == 3)
		{
			pos_move->b = pos_move->b - num_scratches;
		}
		else if(pos->c == 3)
		{
			pos_move->c = pos_move->c - num_scratches;
		}
		else
		{
			pos_move->d = pos_move->d - num_scratches;
		}

		return;
	}
	if(ns->numtwos > ns_move->numtwos)
	{
		if(pos->b == 2)
		{
			pos_move->b = pos_move->b - num_scratches;
		}
		else if(pos->c == 2)
		{
			pos_move->c = pos_move->c - num_scratches;
		}
		else
		{
			pos_move->d = pos_move->d - num_scratches;
		}

		return;
	}
	if(ns->numones > ns_move->numones)
	{
		if(pos->a == 1)
		{
			pos_move->a = pos_move->a - num_scratches;
		}
		else if(pos->b == 1)
		{
			pos_move->b = pos_move->b - num_scratches;
		}
		else if(pos->c == 1)
		{
			pos_move->c = pos_move->c - num_scratches;
		}
		else
		{
			pos_move->d = pos_move->d - num_scratches;
		}

		return;
	}
}

static void findResult(position *pos, position *pos_move, numNs *ns, numNs *ns_move, int *num_scratches, int *result, set<possibleWinningMove> *moves)
{
	*result = 0; //0 - I lose, 1 - I win, 100 - Inconclusive

	*num_scratches = 0;

	*ns_move = *ns;

	possibleWinningMove movepos;

	moves->clear();

	if((ns->numzeroes == 3 && ns->numones == 1))
	{
		*result = 0;
		return;
	}

	if(ns->numzeroes == 4)
	{
		*result = 100;
		return;
	}

	if(ns->numones)
	{
		*ns_move = *ns;
		ns_move->numones--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
	if(ns->numtwos)
	{
		*ns_move = *ns;
		ns_move->numtwos--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 2;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numtwos--;
		ns_move->numones++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
	if(ns->numthrees)
	{
		*ns_move = *ns;
		ns_move->numthrees--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 3;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numthrees--;
		ns_move->numones++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 2;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numthrees--;
		ns_move->numtwos++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
	if(ns->numfours)
	{
		*ns_move = *ns;
		ns_move->numfours--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 4;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfours--;
		ns_move->numones++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 3;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfours--;
		ns_move->numtwos++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 2;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfours--;
		ns_move->numthrees++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
	if(ns->numfives)
	{
		*ns_move = *ns;
		ns_move->numfives--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 5;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfives--;
		ns_move->numones++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 4;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfives--;
		ns_move->numtwos++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 3;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfives--;
		ns_move->numthrees++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 2;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numfives--;
		ns_move->numfours++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
	if(ns->numsixes)
	{
		*ns_move = *ns;
		ns_move->numsixes--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 6;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsixes--;
		ns_move->numones++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 5;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsixes--;
		ns_move->numtwos++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 4;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsixes--;
		ns_move->numthrees++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 3;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsixes--;
		ns_move->numfours++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 2;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsixes--;
		ns_move->numfives++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
	if(ns->numsevens)
	{
		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numzeroes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 7;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numones++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 6;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numtwos++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numthrees++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 4;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numfours++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 3;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numfives++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 2;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}

		*ns_move = *ns;
		ns_move->numsevens--;
		ns_move->numsixes++;
		if(losing_numNs.find(*ns_move) != losing_numNs.end())
		{
			*num_scratches = 1;
			*result = 1;
			movepos.move = *ns_move;
			movepos.num_scratches = *num_scratches;
			calculateWinningMove(pos, pos_move, ns, ns_move, *num_scratches);
			movepos.winning_move = *pos_move;
			moves->insert(movepos);
		}
		if(*result != 100 && *result != 1)
		{
			if(winning_numNs.find(*ns_move) != winning_numNs.end())
			{
				*result = 0;
			}
			else
			{
				*result = 100;
			}
		}
	}
}

void scratches_logic()
{
	position pos, pos_move;
	numNs ns, ns_move;
	int num_scratches;
	int result = 0; //0 - I lose, 1 - I win, 100 - Inconclusive

	set<possibleWinningMove> moves;

	seedWinningPositions();

	for(int i = 0; i < 1; ++i)
	{
		for(pos.a = 0; pos.a <= 1; ++pos.a)
		{
			for(pos.b = 0; pos.b <= 3; ++pos.b)
			{
				for(pos.c = 0; pos.c <= 5; ++pos.c)
				{
					for(pos.d = 0; pos.d <= 7; ++pos.d)
					{
						calculateNumNs(&pos, &ns);

						findResult(&pos, &pos_move, &ns, &ns_move, &num_scratches, &result, &moves);
						if(result == 1)
						{
							if(winning_numNs.find(ns) == winning_numNs.end())
							{
								winning_numNs.insert(ns);
							}
							if(winning_positions.find(pos) == winning_positions.end())
							{
								winning_positions.insert(pos);
								final_moves.insert(std::pair< position, set<possibleWinningMove> >(pos, moves));
							}
						}
						else if(result == 0)
						{
							if(losing_numNs.find(ns) == losing_numNs.end())
							{
								losing_numNs.insert(ns);
							}
							if(losing_positions.find(pos) == losing_positions.end())
							{
								losing_positions.insert(pos);
							}
						}
					}
				}
			}
		}
	}
}

static void printWinningPositionsAndMoves()
{
	position pos;
	final_moves_iter it1;
	set<possibleWinningMove> *moves;
	set<possibleWinningMove>::iterator t;

	for(pos.a = 0; pos.a <= 1; ++pos.a)
	{
		for(pos.b = 0; pos.b <= 3; ++pos.b)
		{
			for(pos.c = 0; pos.c <= 5; ++pos.c)
			{
				for(pos.d = 0; pos.d <= 7; ++pos.d)
				{
					if(winning_positions.find(pos) != winning_positions.end())
					{
						it1 = final_moves.find(pos);
						if(it1 != final_moves.end())
						{
							cout << it1->first.a << "," << it1->first.b << "," << it1->first.c << ","
									<< it1->first.d;
							cout << " -> [";

							moves = &(it1->second);
							for(t = moves->begin(); t != moves->end(); ++t)
							{
								cout << "(" << t->winning_move.a << "," << t->winning_move.b << "," << t->winning_move.c << ","
																	<< t->winning_move.d << ")";
							}

							cout << "] ";
						}

						cout << "[WIN]";

						cout << endl;
					}
					else if(losing_positions.find(pos) != losing_positions.end())
					{
						cout << pos.a << "," << pos.b << "," << pos.c << "," << pos.d;
						cout << "[LOSE]";
						cout << endl;
					}
					else
					{
						cout << pos.a << "," << pos.b << "," << pos.c << "," << pos.d;
						cout << "[INCONCLUSIVE]";
						cout << endl;
					}
				}
			}
		}
	}
}

int main()
{
	scratches_logic();
	printWinningPositionsAndMoves();
	return 0;
}

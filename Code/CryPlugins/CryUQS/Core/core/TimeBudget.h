// Copyright 2001-2016 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

// *INDENT-OFF* - <hard to read code and declarations due to inconsistent indentation>

namespace uqs
{
	namespace core
	{

		//===================================================================================
		//
		// CTimeBudget
		//
		//===================================================================================

		class CTimeBudget final : public ITimeBudget
		{
		private:
			CTimeValue      m_futureTimestampOfExhaustion;      // timestamp of when we will have run out of granted time

		public:
			void            Restart(const CTimeValue& amountOfTimeFromNowOn);

			// ITimeBudget
			virtual bool    IsExhausted() const override;
			// ~ITimeBudget
		};

	}
}
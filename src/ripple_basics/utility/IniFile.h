//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================


#ifndef RIPPLE_INIFILE_H_INCLUDED
#define RIPPLE_INIFILE_H_INCLUDED

// VFALCO TODO Rename to IniFile and clean up
typedef std::map <const std::string, std::vector<std::string> > Section;

// VFALCO TODO Wrap this up in a class interface
//

Section ParseSection (const std::string& strInput, const bool bTrim);
void SectionPrint (Section secInput);
void SectionEntriesPrint (std::vector<std::string>* vspEntries, const std::string& strSection);
bool SectionSingleB (Section& secSource, const std::string& strSection, std::string& strValue);
int SectionCount (Section& secSource, const std::string& strSection);
Section::mapped_type* SectionEntries (Section& secSource, const std::string& strSection);

/** Parse a section of lines as a key/value array.

    Each line is in the form <key>=<value>.
    Spaces are considered part of the key and value.
*/
StringPairArray parseKeyValueSection (Section& secSource, String const& strSection);

#endif

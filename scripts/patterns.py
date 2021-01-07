from typing import List

class Item:
    name: str
    pattern: str
    expected: int
    index: int
    offset: int

    def __init__(self, pattern: str, name: str = '', expected: int = 1, index: int = 0, offset: int = 0) -> None:
        self.name = name
        self.pattern = pattern
        self.expected = expected
        self.index = index
        self.offset = offset

class Group:
    name: str
    pointers: List[Item]
    functions: List[Item]

    def __init__(self, name: str, pointers: List[Item] = [], functions: List[Item] = []) -> None:
        self.name = name
        self.pointers = pointers
        self.functions = functions

def get_groups() -> List[Group]:
    # Add new patterns here, please try to keep the groups ordering alphabetized.
    return [
        Group(name='CBaseFunction', functions=[
            Item(name='Execute', pattern='48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6 41 78 01 48 8B DA')
        ]),

        Group(name='CClass', functions=[
            Item(name='AllocInstance', pattern='48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8'),
            Item(name='GetProperty', pattern='48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00'),
            Item(name='GetFunction', pattern='4C 8B C9 48 85 C9 74 5E 49 8B 41 48')
        ]),

        Group(name='CGameEngine', pointers=[
            Item(pattern='48 89 05 ? ? ? ? 49 8D 9D 88 00 00 00 49 8B 07 4C 8B C3', offset=3)
        ]),

        Group(name='CNamePool', functions=[
            Item(name='Get', pattern='48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8')
        ]),

        Group(name='CRTTISystem', functions=[
            Item(name='Get', pattern='40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?')
        ]),

        Group(name='CStack', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00', expected=3, index=1)
        ]),

        Group(name='CString', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC 20 33 C0 C6 01 00', expected=4, index=2),
            Item(name='copy', pattern='40 53 48 83 EC 20 48 8B D9 48 3B CA', expected=8, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8')
        ]),

        Group(name='IScriptable', functions=[
            Item(name='GetValueHolder', pattern='40 53 48 83 EC 20 48 83 79 38 00', expected=4, index=1)
        ])
    ]

catch2_dep = dependency('catch2', version: '>=3.0.0', fallback: ['catch2', 'catch2_with_main_dep'])

test_exe = executable(
  'test_factorial',
  'test_factorial.cpp',
  dependencies: [catch2_dep],
  link_with: factorial_lib,
  include_directories: [include_directories('..', '../src')],
)

test('factorial unit tests', test_exe)

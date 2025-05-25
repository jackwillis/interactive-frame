catch2_dep = dependency('catch2', required : true)

test_exe = executable(
  'test_factorial',
  'test_factorial.cpp',
  dependencies: [catch2_dep],
  link_with: factorial_lib,
  include_directories: [include_directories('..', '../src')],
)

test('factorial unit tests', test_exe)
